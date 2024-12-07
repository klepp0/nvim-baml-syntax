// -----------------------------
// Comments (https://docs.boundaryml.com/ref/baml/general-baml-syntax/comments)
// -----------------------------
// hello there!
foo // this is a trailing comment

/// This is a docstring for a class
class Foo {
    /// This is a docstring for a property
    property1 string
}

#"
    My string. {#
        This is a comment
    #}
    hi!
"#

// -----------------------------
// Environment Variables (https://docs.boundaryml.com/ref/baml/general-baml-syntax/environment-variables)
// -----------------------------
env.YOUR_VARIABLE_NAME

client<llm> MyCustomClient {
    provider "openai"
    options {
        model "gpt-4o-mini"
        // Set the API key using an environment variable
        api_key env.MY_SUPER_SECRET_API_KEY
    }
}

// -----------------------------
// Strings (https://docs.boundaryml.com/ref/baml/general-baml-syntax/string)
// -----------------------------
"Hello World"

"\n"

#"
Hello
World
"#

#"
    Hello
    World
"#

template_string Greeting(name: string) #"
  Hello {{ name }}!
"#

#"\n"#

###"
  #"Hello"#
"###

// -----------------------------
// Ints & Floats (https://docs.boundaryml.com/ref/baml/general-baml-syntax/int-float)
// -----------------------------
function DescribeCircle(radius: int | float, pi: float?) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Describe a circle with a radius of {{ radius }} units.
        Include the area of the circle using pi as {{ pi or 3.14159 }}.
        
        What are some properties of the circle?
    "#
}

test CircleDescription {
    functions [DescribeCircle]
    // will be cast to int
    args { radius 5 }
}

test CircleDescription2 {
    functions [DescribeCircle]
    // will be cast to float
    args { 
        radius 5.0 
        pi 3.14
    }
}

// -----------------------------
// Booleans (https://docs.boundaryml.com/ref/baml/general-baml-syntax/bool)
// -----------------------------
function CreateStory(long: bool) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Write a story that is {{ "10 paragraphs" if long else "1 paragraph" }} long.
    "#
}

test LongStory {
    functions [CreateStory]
    args { long true }
}

test ShortStory {
    functions [CreateStory]
    args { long false }
}

// -----------------------------
// Arrays (https://docs.boundaryml.com/ref/baml/general-baml-syntax/array-list)
// -----------------------------
{
  key1 [value1, value2, value3],
  key2 [
    value1,
    value2,
    value3
  ],
  key3 [
    {
      subkey1 "valueA",
      subkey2 "valueB"
    },
    {
      subkey1 "valueC",
      subkey2 "valueD"
    }
  ]
}

function DescriptionGame(items: string[]) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        What 3 words best describe all of these: {{ items }}.
    "#
}

test FruitList {
    functions [DescriptionGame]
    args { items ["apple", "banana", "cherry"] }
}

test CityDescription {
    functions [DescriptionGame]
    args { items [
            "New York",
            "Los Angeles",
            "Chicago"
        ]
    }
}

// -----------------------------
// Maps (https://docs.boundaryml.com/ref/baml/general-baml-syntax/map-dictionary)
// -----------------------------
{
  key1 value1,
  key2 {
    nestedKey1 nestedValue1,
    nestedKey2 nestedValue2
  }
}

class Person {
    name string
    age int
    isEmployed bool
}

function DescribePerson(person: Person) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Describe the person with the following details: {{ person }}.
    "#
}

test PersonDescription {
    functions [DescribePerson]
    args { 
        person {
            name "John Doe",
            age 30,
            isEmployed true
        }
    }
}

class Company {
    name string
    location map<string, string>
    employeeCount int
}

function DescribeCompany(company: Company) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Describe the company with the following details: {{ company }}.
    "#
}

test CompanyDescription {
    functions [DescribeCompany]
    args { 
        company {
            name "TechCorp",
            location {
                city "San Francisco",
                state "California"
            },
            employeeCount 500
        }
    }
}

class Project {
    title string
    description string
}

function DescribeProject(project: Project) -> string {
    client "openai/gpt-4o-mini"
    prompt #"
        Describe the project with the following details: {{ project }}.
    "#
}

test ProjectDescription {
    functions [DescribeProject]
    args { 
        project {
            title "AI Research",
            description #"
                This project focuses on developing
                advanced AI algorithms to improve
                machine learning capabilities.
            "#
        }
    }
}

// -----------------------------
// Types (https://docs.boundaryml.com/ref/baml/types)
// -----------------------------
function ClassifyIssue(issue_description: string) -> "bug" | "enhancement" {
  client GPT4Turbo
  prompt #"
    Classify the issue based on the following description:
    {{ ctx.output_format }}

    {{ _.role("user")}}
    {{ issue_description }}
  "#
}

function DescribeImage(myImg: image) -> string {
  client GPT4Turbo
  prompt #"
    {{ _.role("user")}}
    Describe the image in four words:
    {{ myImg }}
  "#
}

function DescribeSound(myAudio: audio) -> string {
  client GPT4Turbo
  prompt #"
    {{ _.role("user")}}
    Describe the audio in four words:
    {{ myAudio }}
  "#
}

enum Name {
  Value1
  Value2 @description("My optional description annotation")
}

class Car {
  model string
  year int @description("Year of manufacture")
}

enum Category {
  A
  B
  C
}

// Enum key syntax
map<Category, string>

// Literal strings syntax
map<"A" | "B" | "C", string>

// -----------------------------
// Functions (https://docs.boundaryml.com/ref/baml/functions)
// -----------------------------
function FunctionName(param: Type) -> ReturnType {
    client ModelName
    prompt #"
        Template content
    "#
}

function name(parameters) -> return_type {
    client llm_specification
    prompt block_string_specification
}

class CustomType {
    field1 string
    field2 int
    nested NestedType
}

function ProcessCustomType(data: CustomType) -> ResultType {
    // ...
}

prompt #"
    Input data: {{ input_data }}
    
    {% if condition %}
        Conditional content
    {% endif %}
    
    {{ ctx.output_format }}
"#

function ExtractEmail(text: string) -> string {
    client GPT4Turbo
    prompt #"
        Extract the email address from the following text:
        {{ text }}
        
        {{ ctx.output_format }}
    "#
}

class Person {
    name string
    age int
    contacts Contact[]
}

class Contact {
    type "email" | "phone"
    value string
}

function ParsePerson(data: string) -> Person {
    client "openai/gpt-4o"
    prompt #"
        {{ ctx.output_format }}
        
        {{ _.role('user') }}
        {{ data }}
    "#
}

// -----------------------------
// Tests (https://docs.boundaryml.com/ref/baml/test)
// -----------------------------
test TestName {
    functions [FunctionName]
    args {
        paramName "value"
    }
}

test name {
    functions [function_list]
    args {
        parameter_assignments
    }
}

test SimpleTest {
    functions [ClassifyMessage]
    args {
        input "Can't access my account"
    }
}

test ComplexTest {
    functions [ProcessMessage]
    args {
        message {
            user "john_doe"
            content "Hello world"
            metadata {
                timestamp 1234567890
                priority "high"
            }
        }
    }
}

test ArrayTest {
    functions [BatchProcess]
    args {
        messages [
            {
                user "user1"
                content "Message 1"
            }
            {
                user "user2"
                content "Message 2"
            }
        ]
    }
}

test ImageFileTest {
    functions [AnalyzeImage]
    args {
        param {
            file "../images/test.png"
        }
    }
}

test ImageUrlTest {
    functions [AnalyzeImage]
    args {
        param {
            url "https://example.com/image.jpg"
        }
    }
}

test ImageBase64Test {
    functions [AnalyzeImage]
    args {
        param {
            base64 "a41f..."
            media_type "image/png"
        }
    }
}

test AudioFileTest {
    functions [TranscribeAudio]
    args {
        audio {
            file "../audio/sample.mp3"
        }
    }
}

test AudioUrlTest {
    functions [TranscribeAudio]
    args {
        audio {
            url "https://example.com/audio.mp3"
        }
    }
}

test AudioBase64Test {
    functions [TranscribeAudio]
    args {
        audio {
            base64 "..."
            media_type "audio/mp3"
        }
    }
}

test LongTextTest {
    functions [AnalyzeText]
    args {
        content #"
            This is a multi-line
            text input that preserves
            formatting and whitespace
        "#
    }
}

test EndToEndFlow {
    functions [
        ExtractInfo
        ProcessInfo
        ValidateResult
    ]
    args {
        input "test data"
    }
}

// -----------------------------
// Template Strings (https://docs.boundaryml.com/ref/baml/template-string)
// -----------------------------
// Inject a list of "system" or "user" messages into the prompt.
template_string PrintMessages(messages: Message[]) #"
  {% for m in messages %}
    {{ _.role(m.role) }}
    {{ m.message }}
  {% endfor %}
"#

function ClassifyConversation(messages: Message[]) -> Category[] {
  client GPT4Turbo
  prompt #"
    Classify this conversation:
    {{ PrintMessages(messages) }}

    Use the following categories:
    {{ ctx.output_format}}
  "#
}

// -----------------------------
// Clients (https://docs.boundaryml.com/ref/baml/client-llm)
// -----------------------------
function MakeHaiku(topic: string) -> string {
  client "openai/gpt-4o"
  prompt #"
    Write a haiku about {{ topic }}.
  "#
}

client<llm> MyClient {
  provider "openai"
  options {
    model "gpt-4o"
    // api_key defaults to env.OPENAI_API_KEY
  }
}

function MakeHaiku(topic: string) -> string {
  client MyClient
  prompt #"
    Write a haiku about {{ topic }}.
  "#
}

// -----------------------------
// Classes (https://docs.boundaryml.com/ref/baml/class)
// -----------------------------
class Foo {
  property1 string
  property2 int?
  property3 Bar[]
  property4 MyEnum
}

class MyClass {
  property1 string @alias("name") @description("The name of the object")
  age int? @description("The age of the object")
}

class MyClass {
  property1 string
  property2 int?

  @@dynamic // allows me to later propert3 float[] at runtime
}

// -----------------------------
// Enums (https://docs.boundaryml.com/ref/baml/enum)
// -----------------------------
enum MyEnum {
  Value1
  Value2
  Value3

  @@alias("My Custom Enum")
  @@dynamic // allows me to later skip Value2 at runtime
}

enum MyEnum {
  Value1 @alias("complete_summary") @description("Answer in 2 sentences")
  Value2
  Value3 @skip
  Value4 @description(#"
    This is a long description that spans multiple lines.
    It can be useful for providing more context to the value.
  "#)
}

// -----------------------------
// Attributes (https://docs.boundaryml.com/ref/attributes/what-are-attributes)
// -----------------------------
class MyClass {
  property1 string @alias("name") @description("The name of the object")
  age int? @check(positive, {{ this > 0 }})
}

class MyClass {
  property1 string
  property2 int?

  @@dynamic // allows adding fields dynamically at runtime
}

// -----------------------------
// Aliases (https://docs.boundaryml.com/ref/attributes/alias)
// -----------------------------
class MyClass {
  property1 string @alias("name")
}

enum MyEnum {
  Value1 
  // Note that @@alias is applied to the enum itself, not the value
  @@alias("My Name")
}

enum MyEnum {
  Value1 @alias("Something")
}

// -----------------------------
// Descriptions (https://docs.boundaryml.com/ref/attributes/description)
// -----------------------------
class MyClass {
  property1 string
}

class MyClass {
  property1 string @description("The name of the object")
}

enum MyEnum {
  Value1
  Value2
}

enum MyEnum {
  Value1 @description("The first value")
  Value2 @description("The second value")
}

enum MyEnum {
  Value1
  Value2

  @@description("This enum represents status codes")
}

// -----------------------------
// Skips (https://docs.boundaryml.com/ref/attributes/skip)
// -----------------------------
enum MyEnum {
  Value1
  Value2 @skip
}

// -----------------------------
// Asserts (https://docs.boundaryml.com/ref/attributes/assert)
// -----------------------------
class Foo {
  // @assert will be applied to the field with the name "bar"
  bar int @assert(between_0_and_10, {{ this > 0 and this < 10 }})
}

class Foo {
  // @assert will be applied to the field with no name
  bar int @assert({{ this > 0 and this < 10 }})
}

class MyClass {
  // @assert will be applied to each element in the array
  my_field (string @assert(is_valid_email, {{ this.contains("@") }}))[]
}

function MyFunction(x: int @assert(between_0_and_10, {{ this > 0 and this < 10 }})) {
  client "openai/gpt-4o"
  prompt #"Hello, world!"#
}

class Foo {
  bar int
  baz string
  @@assert(baz_length_limit, {{ this.baz|length < this.bar }})
}

function MyFunction(x: int @assert(between_0_and_10, {{ this > 0 and this < 10 }})) {
  client "openai/gpt-4o"
  prompt #"Hello, world!"#
}

class Foo {
  bar int
  baz string
  @@assert(baz_length_limit, {{ this.baz|length < this.bar }})
}

// -----------------------------
// Checks (https://docs.boundaryml.com/ref/attributes/check)
// -----------------------------
class Foo {
  bar int @check(less_than_zero, {{ this < 0 }})
}

class Bar {
  baz int
  quux string
  @@check(quux_limit, {{ this.quux|length < this.baz }})
}

// -----------------------------
// Dynamic (https://docs.boundaryml.com/ref/attributes/dynamic)
// -----------------------------
class MyClass {
  property1 string
  property2 int?

  @@dynamic // allows adding fields dynamically at runtime
}

enum MyEnum {
  Value1
  Value2

  @@dynamic // allows modifying enum values dynamically at runtime
}
