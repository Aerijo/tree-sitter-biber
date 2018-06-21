# tree-sitter-biber
Tree sitter parser for `.bib` files using `biber` syntax. This is subtly different to the original `bibtex` syntax, but largely similar.

The main differences are how comments are handled. For `bibtex`, anything outside an `@` entry or command is a proper comment. In `biber`, this is also a comment but is considered "junk" (and warns you appropriately in the log file). Instead, `biber` requires `%` to consider a line a proper comment.

Similarly, the comment command is also treated differently. In `bibtex`, the parsing of the command stops immediately after `@comment`. So `@comment{this is a comment}` is equivalent to `@comment this is a comment`, because neither senetences are considered inside a command or entry. In contrast, `biber` will grab the entire body, and throw an error if it doesn't exist. I.e., `@comment this is an error` will throw because `biber` is expecting an opening delimiter (brace or parenthesis).

Here's a scenario where this may be relevant in real life:
```
@comment{email me at myemail@domain.com}
```
`biber` will be fine, but `bibtex` will throw an error (because the entry `domain` has no valid opening delimiter).

And, to be fair to `bibtex`, this will break `biber` but not `bibtex`:
```
@comment{ { }
```

More can be found here https://tex.stackexchange.com/questions/261261/are-comments-discouraged-in-a-bibtex-file/262282

Importantly, `%` is _always_ a comment outside of a string in biber. So another real life difference is
```
@ARTICLE{auchunbekannt,
  title = {Beispielaufsatz},
  journal = {Zeitschrift},
  year = {2001},
  %volume = {7},
  pages = {1--35, 99--291},
  annotation = {lorem},
}

```
where `bibtex` will throw an error, but biber just considers the `volume` line to be a comment.

Similarly,
```
@BOOK(Car%ey,
,
  AUTHOR="G. V. Carey",
  TITLE="Mind the Stop: A Brief Guide to Punctuation", PUBLISHER="Penguin",
  YEAR="1958"
)
```
The extra comma is necessary for `biber`, and the key name is `Car`. For `bibtex`, the extra comma throws a "missing a field" error, but the key is completely valid (though good luck referencing it in the document).

Note that special TeX characters inside of entries, besides ones `biber` (and `bibtex`) actually looks for, are effectively ignored. So it is not really possible to accurately parse the contents of a string, nor desirable for a faithful parser. If you have an unescaped `%` in the string, it will break when the citation is used in a document (but is completely valid `biber` syntax).
