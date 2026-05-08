
# Arrays

An array is a collection of elements of the same data type stored in contiguous memory locations. It allows you to store multiple values in a single variable.

### Array Syntax
```
data_type array_name[size];
```
## Declaration and Initialization
You must specify the type of elements and the number of elements required by the array.

```cpp
// Declaring an array of 5 integers
int numbers[5]; 

// Initializing an array with values
int grades[5] = {90, 85, 70, 95, 80};

// Initializing without specifying size (compiler determines size)
int scores[] = {10, 20, 30};
```

## Accessing Array Elements
```cpp
#include <iostream>
using namespace std;

int main() {

    int numbers[5] = {10, 20, 30, 40, 50};

    cout << numbers[0] << endl;
    cout << numbers[2] << endl;

    return 0;
}
```
Output:
```
10
30
```
## Changing Array Values
```cpp
int arr[3] = {1, 2, 3};
arr[1] = 100;
```
Now array becomes:
```
1 100 3
```

### Advantages of Arrays
- Easy data storage
- Fast access
- Useful with loops
- Organized data handling

### Disadvantages of Arrays
- Fixed size
- Cannot grow dynamically
- Same data type only

## 2D Array

These stores data in rows and columns like a table.

### Syntax

```cpp
data_type array_name[rows][columns];
```

### Initializing 2D Array
```cpp
int matrix[2][3] = {
{1, 2, 3},
{4, 5, 6}
};
```

### Accessing Elements
```cpp
cout << matrix[0][1];
```
Output:
```
2
```

### Uses of 2D Arrays
- Matrices
- Tables
- Game boards
- Image pixels 

### Key Points
- First index = row
- Second index = column
- Uses nested loops
- Data stored in table form

---

# Vectors (Dynamic Arrays)

A `std::vector` is a sequence container in C++ that behaves like an array, but its size can change dynamically. It is part of the Standard Template Library (STL).

### Array vs Vector
| Feature | Standard Array | Vector |
| :--- | :--- | :--- |
| **Size** | Fixed (cannot be changed after creation) | Dynamic (can grow and shrink) |
| **Memory** | Handled manually or at compile-time | Managed automatically |
| **Library** | Built into the language | Requires `#include <vector>` |

## Declaring a Vector
To use a vector, you must include the `<vector>` library. You also need to specify the data type inside angle brackets `< >`.

```cpp
#include <iostream>
#include <vector> // Required for vectors
using namespace std;

int main() {
    // Declaring an empty vector of integers
    vector<int> numbers; 

    // Declaring a vector with initial values
    vector<string> names = {"Kamal", "Nimal", "Sunil"};

    return 0;
}
```

## Adding and Removing Elements

Vectors have built-in functions that make them very easy to use.

- **push_back(value):** Adds a new element to the end of the vector
- **pop_back():** Removes the last element from the vector
- **size():** Returns the current number of elements

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> scores;

    // Adding items
    scores.push_back(85); // Size is now 1
    scores.push_back(90); // Size is now 2
    scores.push_back(75); // Size is now 3

    // Accessing items (just like a normal array)
    cout << "First score: " << scores[0] << endl;

    // Checking the size
    cout << "Total items: " << scores.size() << endl;

    // Removing the last item (75)
    scores.pop_back(); 
    
    // Size is now 2
    cout << "New total items: " << scores.size() << endl; 

    return 0;
}
```