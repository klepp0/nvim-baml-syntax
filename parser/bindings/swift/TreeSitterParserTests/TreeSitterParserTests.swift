import XCTest
import SwiftTreeSitter
import TreeSitterParser

final class TreeSitterParserTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_parser())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Parser grammar")
    }
}
