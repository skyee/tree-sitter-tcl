(quoted_word) @string

((command
    name: (word) @keyword
    arguments: (word_list (word) @variable)
 (#match? @keyword "set")))

(command
  name: (word) @function.call)

