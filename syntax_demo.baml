// -----------------------------------------------------------------------
// Comments & Docstrings
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/comments
// -----------------------------------------------------------------------
// Regular comment
foo // trailing comment

/// This is a docstring for a class
class Foo {
    /// docstring for a property
    name string
}

// -----------------------------------------------------------------------
// Environment Variables
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/environment-variables
// -----------------------------------------------------------------------
env.MY_SECRET_KEY

// -----------------------------------------------------------------------
// Strings
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/string
// -----------------------------------------------------------------------
"Hello World"
"Escaped newline: \n"
#"
  Multi-line
  String
"#

template_string Greet(name: string) #"
  Hello {{ name }}!
"#

// -----------------------------------------------------------------------
// Ints, Floats & Booleans
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/int-float
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/bool
// -----------------------------------------------------------------------
function Describe(radius: int | float, detailed: bool) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Radius: {{ radius }}.
        {{ "Give detailed info." if detailed else "Short description." }}
    "#
}

// -----------------------------------------------------------------------
// Arrays & Maps
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/array-list
// https://docs.boundaryml.com/ref/baml/general-baml-syntax/map-dictionary
// -----------------------------------------------------------------------
{
  fruits ["apple", "banana", "cherry"],
  config {
    retries 3,
    endpoint "https://api.example.com"
  }
}

// -----------------------------------------------------------------------
// Classes, Enums & types
// https://docs.boundaryml.com/ref/baml/class
// https://docs.boundaryml.com/ref/baml/enum
// https://docs.boundaryml.com/ref/baml/types
// -----------------------------------------------------------------------
enum Status {
  Pending
  Complete @description("The task is finished")
  Error @skip
}

class Person {
    name string @alias("full_name") @description("Person's name")
    age int? @check(adult, {{ this >= 18 }})
    tags string[] @assert(has_tags, {{ this|length > 0 }})
    @@dynamic
}

// -----------------------------------------------------------------------
// Attributes (Alias, Description, Assert, Check, Dynamic)
// https://docs.boundaryml.com/ref/attributes/what-are-attributes
// -----------------------------------------------------------------------
// Already shown inline above.

// -----------------------------------------------------------------------
// Functions & Clients
// https://docs.boundaryml.com/ref/baml/functions
// https://docs.boundaryml.com/ref/baml/client-llm
// -----------------------------------------------------------------------
client<llm> DefaultClient {
    provider "openai"
    options {
        model "gpt-4o"
        api_key env.MY_SECRET_KEY
    }
}

function AnalyzeData(data: string) -> string {
    client DefaultClient
    prompt #"
        {{ ctx.output_format }}
        {{ _.role("user") }}
        Analyze: {{ data }}
    "#
}

function ClassifyIssue(issue: string) -> "bug" | "enhancement" {
    client "openai/gpt-4o-mini"
    prompt #"
        Classify: {{ issue }}
    "#
}

// -----------------------------------------------------------------------
// Tests
// https://docs.boundaryml.com/ref/baml/test
// -----------------------------------------------------------------------
test AnalyzeTest {
    functions [AnalyzeData]
    args {
        data "Some input text"
    }
}

test IssueTest {
    functions [ClassifyIssue]
    args {
        issue "App crashes on launch"
    }
}

// -----------------------------------------------------------------------
// Template Strings & Jinja Syntax
// https://docs.boundaryml.com/ref/baml/template-string
// -----------------------------------------------------------------------
template_string PrintPeople(people: Person[]) #"
  {% for p in people %}
    {{ p.name }}: Age = {{ p.age or "Unknown" }}
  {% endfor %}
"#

function DescribePeople(people: Person[]) -> string {
    client DefaultClient
    prompt #"
        People info:
        {{ PrintPeople(people) }}
    "#
}

// -----------------------------------------------------------------------
// Example using `->` return types and union types
// -----------------------------------------------------------------------
function Convert(value: string) -> int | float | string {
    // Just a demo function body
    client "openai/gpt-4o-mini"
    prompt #"Convert {{ value }}"#
}

