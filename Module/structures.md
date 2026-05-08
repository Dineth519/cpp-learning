# Structures (struct)
A structure is a user-defined data type that allows to group related variables of different data types into a single unit. While an array stores multiple items of the same type, a struct can store a mix of types (eg: a string, an int, and a float).

### Syntax

```cpp
struct StructName {
    data_type variable1;
    data_type variable2;
};
```

**Example:**
```cpp
struct Student {
string name;
int age;
float gpa;
}; 
```

## Initializing Structures

We can also initialize a structure at the time of declaration using curly braces {}.

```cpp
Student s2 = {"Sanjuna", 22, 3.5};
```


## Creating and Accessing Members

To use a structure, should create an instance (a variable) of that type and use the dot operator (.) to access its members.

```cpp
#include <iostream>
#include <string>
using namespace std;

// Define the structure
struct Student {
string name;
int age;
float gpa;
};

int main() {
// Create a structure variable
Student s1;

    // Assigning values
    s1.name = "Dineth";
    s1.age = 21;
    s1.gpa = 3.8;

    // Accessing and printing values
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "GPA: " << s1.gpa << endl;

    return 0;
}
```

## Advantages of Struct
- Easy data grouping
- Cleaner code
- Useful for records and objects

## Key Points
- Struct groups related variables
- Can contain different data types
- Access members using . operator
- Can create arrays of structs