class Person {
    /// A docstring for the 'Person' class
    name string @alias("full_name") @description("The person's full name")
    age int? @check(adult, {{ this >= 18 }}) @description("Age of the person, optional")
    tags string[] @assert(has_tags, {{ this|length > 0 }})
    @@dynamic
}
