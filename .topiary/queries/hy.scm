; Minimal formatting rules for Hy.
; This is intentionally conservative: it enforces spacing between elements
; without attempting full pretty-print semantics.

[
  (comment)
  (string)
  (bracket_string)
] @leaf

(comment) @append_hardline
(shebang) @append_hardline
(source_file (_) @append_hardline . (_))

(expression (_) @append_space . (_))
(list (_) @append_space . (_))
(tuple (_) @append_space . (_))
(set (_) @append_space . (_))
(dict (_) @append_space . (_))
