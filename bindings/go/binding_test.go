package tree_sitter_baml_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_baml "github.com/tree-sitter/tree-sitter-baml/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_baml.Language())
	if language == nil {
		t.Errorf("Error loading Baml grammar")
	}
}
