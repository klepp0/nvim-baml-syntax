import XCTest
import SwiftTreeSitter
import TreeSitterBaml

final class TreeSitterBamlTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_baml())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Baml grammar")
    }
}
