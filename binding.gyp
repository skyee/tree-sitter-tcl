{
  "targets": [
    {
      "target_name": "tree_sitter_tcl_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        "tcl/src/parser.c",
        "tcl/src/scanner.c",
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
