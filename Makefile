NODE ?= node
CARGO ?= cargo
TREE_SITTER ?= tree-sitter
FILTER ?=

common_sources := common/scanner.h

tcl_sources := \
	tcl/grammar.js \
	tcl/src/scanner.c \

tclsh_sources := \
	tclsh/grammar.js \
	tclsh/src/scanner.c \

tcl_generated := \
	tcl/src/grammar.json \
	tcl/src/node-types.json \
	tcl/src/parser.c \
	tcl/src/tree_sitter/parser.h \

tclsh_generated := \
	tclsh/src/grammar.json \
	tclsh/src/node-types.json \
	tclsh/src/parser.c \
	tclsh/src/tree_sitter/parser.h \


.PHONY: all
all: generate

.PHONY: generate
generate: generate-tcl generate-tclsh

.PHONY: test
test: test-tcl test-tclsh test-highlight test-bindings

.PHONY: generate-tcl
generate-tcl: $(tcl_generated)
$(tcl_generated): $(common_sources) $(tcl_sources)
	cd tcl && $(TREE_SITTER) generate --no-bindings

.PHONY: generate-tclsh
generate-tclsh: $(tclsh_generated)
$(tclsh_generated): $(common_sources) $(tclsh_sources)
	cd tclsh && $(TREE_SITTER) generate --no-bindings

.PHONY: test-highlight
test-highlight: $(tclsh_generated)
	$(TREE_SITTER) test
	
.PHONY: test-bindings
test-bindings: test-bindings-node test-bindings-rust

.PHONY: test-bindings-node
test-bindings-node: bindings/node/test.mjs generate-tcl generate-tclsh
	$(NODE) $<

.PHONY: test-bindings-rust
test-bindings-rust: bindings/rust/lib.rs generate-tcl generate-tclsh
	$(CARGO) test

.PHONY: test-%
test-%: generate-%
ifeq ($(FILTER),)
	cd $* && $(TREE_SITTER) test
else
	cd $* && $(TREE_SITTER) test --filter $(FILTER)
endif

