# 😀 ARRAYS IN C

**An array is a linear data structure that stores a fixed-size sequence of elements of the same data type in contiguous memory locations. Each element can be accessed directly using its index, which allows for efficient retrieval and modification**

---
## Creating an Array

***The whole process of creating an array can be divided into two primary sub processes i.e.***

- ## Array Declaration

Array declaration is the process of specifying the type, name, and size of the array. In C, we have to declare the array like any other variable before using it.

- syntax

```
data_type array_name[size];

```
---
- ## Array Initialization

***Initialization in C is the process to assign some initial value to the variable. When the array is declared or allocated memory, the elements of the array contain some garbage value. So, we need to initialize the array to some meaningful values.***

- syntax
```
int arr[5] = {1, 2, 3, 4, 5};
```

---

## Accessing Array Elements

Array in C provides random access to its elements, which means that we can access any element of the array by providing the position of the element, called the index

- syntax
```
array_name [index];
```
---

## Update Array Element

***We can update the value of array elements at the given index i in a similar way to accessing an element by using the array `square brackets []` and `assignment operator (=)`.***

- syntax
```
array_name[i] = new_value;
```
---

## C Array Traversal

Array Traversal is the process in which we visit every element of the array in a specific order. For C array traversal, we use loops to iterate through each element of the array.

- example
```
#include <stdio.h>

int main() {
    int arr[5] ={1, 2, 3, 4, 5}
    
    // Print each element of
    // array using loop
    printf("Printing Array Elements\n"); 
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    // Printing array element in reverse
    printf("Printing Array Elements in Reverse\n"); 
    for(int i = 4; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
```
---

## Size of Array

***The size of the array refers to the number of elements that can be stored in the array. The array does not contain the information about its- example  size but we can extract the size using sizeof() operator***

- example 
```
#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 8, 2, 6};
    
    // Size of the array
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d", size);
    return 0;
}
```
---
