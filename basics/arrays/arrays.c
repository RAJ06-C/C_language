#include <stdio.h>

int main()
{
    // ARRAYS IN C

    /*
    An array is a linear data structure that stores a fixed-size sequence of elements of the same data type in contiguous memory locations. Each element can be accessed directly using its index, which allows for efficient retrieval and modification
    */

    // Creating an Array

    /*
    The whole process of creating an array can be divided into two primary sub processes i.e
    */

    // 1).array declaration

    printf("array declaration\n");
    // Creates array arr to store 5 integer values.
    int arr[5];
    printf("%d\n", arr);

    // 2)array initialization

    /*Initialization in C is the process to assign some initial value to the variable. When the array is declared or allocated memory, the elements of the array contain some garbage value. So, we need to initialize the array to some meaningful values.*/

    printf("array initialization\n");
    int arr1[5] = {2, 4, 8, 12, 16};
    printf("%d\n", arr1);

    /*
    We can skip mentioning the size of the array if declaration and initialisation are done at the same time. This will create an array of size n where n is the number of elements defined during array initialisation. We can also partially initialize the array. In this case, the remaining elements will be assigned the value 0 (or equivalent according to the type)
    */

    printf("partial initialisation\n");
    // Partial Initialisation
    int arr2[5] = {2, 4, 8};
    printf("%d\n", arr2);

    printf("skiping the size of the array\n");
    // Skiping the size of the array.
    int arr3[] = {2, 4, 8, 12, 16};
    printf("%d\n", arr3);

    printf("initialize an array whit all elements set to 0\n");
    // initialize an array with all elements set to 0.
    int arr4[5] = {0};
    printf("%\n", arr4);

    // ACCESSING ARRY ELEMENTS
    printf("example of array accessing \n");

    // array declaration and initialization
    int array[5] = {2, 4, 8, 12, 16};

    // accessing element at index 2 i.e 3rd element
    printf("%d ", array[2]);

    // accessing element at index 4 i.e last element
    printf("%d ", array[4]);

    // accessing element at index 0 i.e first element
    printf("%d ", array[0]);

    // UPDATE ARRAY ELEMENTS
    printf("UPDATE ARRAY ELEMENTS\n");

    // Update the first value
    // of the array
    array[0] = 1;
    printf("%d", arr[0]);

    //ARRAY TRAVERSAL
    printf("ARRAY TRAVERSAL\n");
    /*
    Array Traversal is the process in which we visit every element of the array in a specific order. For C array traversal, we use loops to iterate through each element of the array
    */

    int array1[5] = {2, 4, 8, 12, 16};
    
    // Print each element of
    // array using loop
    printf("Printing Array Elements\n"); 
    for(int i = 0; i < 5; i++){
        printf("%d ", array1[i]);
    }
    printf("\n"); 
    // Printing array element in reverse
    printf("Printing Array Elements in Reverse\n"); 
    for(int i = 4; i>=0; i--){
        printf("%d ", array1[i]);
    }

    return 0;
}