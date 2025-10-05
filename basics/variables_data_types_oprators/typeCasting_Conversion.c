#include<stdio.h>

//type casting and type conversion

/*
In C programming, type conversion and type casting refer to the process of changing a value from one data type to another. These concepts are crucial for managing data types in expressions and ensuring correct calculations.
*/
int main(){

    //1. Type Conversion (Implicit Type Conversion/Coercion):

    /*
    This type of conversion is performed automatically by the compiler without any explicit instruction from the programmer. It generally occurs in situations where the compiler can safely convert one data type to another without potential data loss, or when performing operations involving mixed data types
    */
   int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2; // num1 (int) is implicitly converted to float
    printf("Result: %.2f\n", result);

    //2. Type Casting (Explicit Type Conversion):

    /*
    Type casting is performed explicitly by the programmer using the cast operator. This is necessary when the conversion might involve potential data loss (e.g., converting a float to an integer), or when the programmer wants to explicitly control the type of an expression.
    */


    float float_val = 12.75;
    int int_val = (int) float_val; // Explicitly cast float to int
    printf("Integer value: %d\n", int_val); // Output: Integer value: 12 (decimal part truncated)

    //Ensuring float division

    int total_marks = 85;
    int num_subjects = 3;
    float average;

    // Without casting, integer division would occur
    average = total_marks / num_subjects;
    printf("Average (without casting): %.2f\n", average); // Output: Average (without casting): 28.00

    // With casting, one operand is converted to float for float division
    average = (float)total_marks / num_subjects;
    printf("Average (with casting): %.2f\n", average); // Output: Average (with casting): 28.33
    
    return 0;
}