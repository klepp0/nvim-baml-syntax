" syntax/baml.vim

" Clear existing syntax definitions
syntax clear

" Define keywords
syntax keyword bamlKeyword function class

" Define comments (single-line starting with //)
syntax match bamlComment "//.*$"

" Define strings (text within double quotes)
syntax region bamlString start=+"+ skip=+\\\\\|\\\"+ end=+"+

" Define numbers
syntax match bamlNumber "\v\d+"

" Link syntax groups to highlight groups
highlight link bamlKeyword Keyword
highlight link bamlComment Comment
highlight link bamlString String
highlight link bamlNumber Number
