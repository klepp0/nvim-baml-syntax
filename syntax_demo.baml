// -------------------------------------------------------------------------
// syntax_demo.baml
// A comprehensive example file to test BAML syntax highlighting.
// -------------------------------------------------------------------------

// This is a normal single-line comment
/// This is a docstring comment for a class below

// Environment variable usage
env.MY_SECRET_KEY

// Primitive Types & Multimodal
// bool, int, float, string, null, image, audio, model
// We'll show them in class fields and function params.

class Person {
    /// A docstring for the 'Person' class
    name string @alias("full_name") @description("The person's full name")
    age int? @check(adult, {{ this >= 18 }}) @description("Age of the person, optional")
    tags string[] @assert(has_tags, {{ this|length > 0 }})
    @@dynamic
}

enum Status {
  Pending
  Complete @description("The task is finished")
  Error @skip
  @@description("Represents the status of a job")
}

enum Category {
  A @alias("CatA")
  B
  C @description("A category representing something else")
}

// Union types, optional fields in function return
function Describe(radius: int | float, detailed: bool) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Radius: {{ radius }}.
        {{ "Give detailed info." if detailed else "Short description." }}
    "#
}

// Template_string with Jinja content
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

// Example with environment variables in client config
client<llm> DefaultClient {
    provider "openai"
    options {
        model "gpt-4o"
        api_key env.MY_SECRET_KEY
    }
}

// Example function with union return type
function Convert(value: string) -> int | float | string {
    // Just a demo function body
    client "openai/gpt-4o-mini"
    prompt #"Convert {{ value }}"#
}

function ClassifyIssue(issue: string) -> "bug" | "enhancement" {
    client "openai/gpt-4o-mini"
    prompt #"
        Classify the issue based on description:
        {{ issue }}
    "#
}

// Using context references and utility references in a prompt
function DetailedDescription(item: string) -> string {
    client DefaultClient
    prompt #"
        {{ ctx.output_format }}
        {{ _.role("user") }}
        Describe in detail: {{ item }}
    "#
}

// Tests section
test AnalyzeTest {
    functions [DescribePeople]
    args {
        people [
            {
                name "Alice",
                age 30,
                tags ["developer", "engineer"]
            },
            {
                name "Bob",
                age 19,
                tags ["student"]
            }
        ]
    }
}

test IssueTest {
    functions [ClassifyIssue]
    args {
        issue "App crashes on launch"
    }
}

test ConvertTest {
    functions [Convert]
    args {
        value "42"
    }
}

test DetailedTest {
    functions [DetailedDescription]
    args {
        item "A beautiful painting"
    }
}

// A map usage with generics and union types
map<Category, string>
map<"A" | "B" | "C", string>

// Additional arrays, maps, and nested structures
{
  settings {
    retries 3,
    endpoint "https://api.example.com"
  },
  fruit_list ["apple", "banana", "cherry"],
  complex_map {
    key1 {
      nestedKey "nestedValue"
    },
    key2 [1, 2, 3]
  }
}

// Another class to test attributes
class Car {
  model string @description("Car model name")
  year int? @description("Year of manufacture")
  @@assert(valid_year, {{ this.year and this.year > 1900 }})
}

// Another enum with a skip and alias
enum MyEnum {
  Value1 @alias("AlternativeName")
  Value2 @skip
  Value3 @description("The third value")
}

// A prompt with Jinja block and comment inside a multiline string
prompt #"
    Input data: {{ input_data }}

    {% if condition %}
        Conditional content using or operator: {{ value or "default" }}
    {% endif %}

    {# This is a Jinja comment #}

    {{ ctx.output_format }}
"#
