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
test: test-tcl test-tclsh test-highlight

.PHONY: generate-tcl
generate-tcl: $(tcl_generated)
$(tcl_generated): $(common_sources) $(tcl_sources)
	cd tcl && $(TREE_SITTER) generate --no-bindings

.PHONY: generate-tclsh
generate-tclsh: $(tclsh_generated)
$(tclsh_generated): $(common_sources) $(tclsh_sources)
	cd tclsh && $(TREE_SITTER) generate --no-bindings

.PHONY: test-tcl
test-tcl: $(tcl_generated) | _test-tcl

.PHONY: test-tclsh
test-tclsh: $(tclsh_generated) | _test-tclsh

.PHONY: _test-%
_test-%:
ifeq ($(FILTER),)
	cd $* && $(TREE_SITTER) test
else
	cd $* && $(TREE_SITTER) test --filter $(FILTER)
endif

.PHONY: test-highlight
test-highlight: $(tclsh_generated)
	$(TREE_SITTER) test
	
