# Trial Class Example

This repository contains a C++ example demonstrating the use of dynamic memory allocation with `new` and `delete`, as well as basic pointer operations.

## Description

The code defines a `trial` class that dynamically allocates memory for `node` structures and a character array. It demonstrates the following:
- Creation and destruction of dynamically allocated objects.
- Basic input and output operations.
- Handling of dynamic arrays.

## Code Overview

### Structures and Classes

- **`node` Struct**: Contains a `char` array to hold information.
- **`trial` Class**: Contains pointers to `node` objects, a `char` array, and methods to manage them.

### Main Functions

- **Constructor (`trial::trial`)**: Initializes pointers to `NULL` and allocates memory as needed.
- **Destructor (`trial::~trial`)**: Frees dynamically allocated memory.
- **`startIn()` Method**: 
  - Allocates memory for `node` objects and a character array.
  - Takes user input to populate these structures.
  - Displays the stored information.

## Compilation and Execution

1. **Compile the Code**:

    ```sh
    g++ -o trial main.cpp
    ```

    Make sure to replace `main.cpp` with the name of your source file if different.

2. **Run the Program**:

    ```sh
    ./trial
    ```

## Code Example

```cpp
#include <iostream>
#include <cstring> // Use <cstring> for C-style string operations
using namespace std;

struct node {
    char info[15];
};

class trial {
private:
    node obj1, *temp1, *temp2, *temp3;
    int length;
    char *p, *q;

public:
    trial(); // constructor
    ~trial(); // destructor
    void startIn();
};

int main() {
    trial lnk; // obj of trial class
    lnk.startIn(); // function call
    return 0; // Return 0 to indicate successful execution
}

trial::trial() {
    temp1 = temp2 = temp3 = NULL;
    p = q = NULL; // Initialize pointers
}

trial::~trial() {
    delete temp1; // Free memory for single objects
    delete temp2;
    delete temp3;
    delete[] p; // Free memory for array
}

void trial::startIn() {
    cout << "\nMaking use of new and delete keywords";
    cout << "\n--------------------------------------------------------\n";
    
    temp1 = new node;
    temp2 = new node; // new nodes created dynamically
    
    cout << "\nEnter info about temp1: ";
    cin >> temp1->info;
    cout << "\nEnter info about temp2: ";
    cin >> temp2->info;
    
    temp3 = &obj1; // compile-time memory allocation
    
    cout << "\nEnter info about temp3: ";
    cin >> temp3->info;
    
    cout << "\nShowing info: ";
    cout << "\ntemp1= " << temp1->info;
    cout << "\ntemp2= " << temp2->info;
    cout << "\ntemp3= " << temp3->info;
    
    cout << "\nEnter length of the array: ";
    cin >> length;
    
    p = new char[length];
    q = p; // Save the start of the array
    
    cout << "\nNow enter elements of " << length << " in the array: ";
    for (int i = 0; i < length; i++) {
        cout << "\nElement at index " << i << " of the array= ";
        cin >> p[i]; // Correct way to use the pointer
    }
    
    cout << "\nelements in the array are: ";
    for (int i = 0; i < length; i++) {
        cout << p[i];
    }
    cout << endl;
}
