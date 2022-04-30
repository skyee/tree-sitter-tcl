# tree-sitter-tcl

Tree-sitter grammar for Tcl language.


## Generating

The recommended way to generate grammar is to use `make`, `make all` or `make
generate`. They all do the same. There is also possibility to use NPM target,
but it is slower — `npm run generate`.


## Credits

* Handling of word concatenation was inspired by [tree-sitter-bash]. I didn't
  think of using external scanner to do that.

* The code allowing to develop two grammars in one repository was basically copied
  from [tree-sitter-typescript].


[tree-sitter-bash]: https://github.com/tree-sitter/tree-sitter-bash
[tree-sitter-typescript]: https://github.com/tree-sitter/tree-sitter-typescript
