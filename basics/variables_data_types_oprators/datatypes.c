#include<stdio.h>

// DATATYPES IN C

/*
Each variable in C has an associated data type. It specifies the type of data that the variable can store like integer, character, floating, double, etc.

Example:


int number;
*/
int main(){
    // INTEGER DATA TYPES

    /*
    The integer datatype in C is used to store the integer numbers (any number including positive, negative and zero without decimal part). Octal values, hexadecimal values, and decimal values can also be stored in int data type in C.

Range:  -2,147,483,648 to 2,147,483,647
Size: 4 bytes
Format Specifier: %d
    */
   int var = 22;
    
    printf("var = %d", var);

    //CHARACTER DATA TYPES

    /*
    Character data type allows its variable to store only a single character. The size of the character is 1 byte. It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.

Range: (-128 to 127) or (0 to 255)
Size: 1 byte
Format Specifier: %c
    */

    char ch = 'A';
    
    printf("ch = %c", ch);

    //FLOAT DATA TYPE

    /*
    In C programming, float data type is used to store single precision floating-point values. These values are decimal and exponential numbers.

Range: 1.2E-38 to 3.4E+38
Size: 4 bytes
Format Specifier: %f

    */

    float val = 12.45;
    
    printf("val = %f", val);

    //DOUBLE DATA TYPE

    /*
    The double data type in C is used to store decimal numbers (numbers with floating point values) with double precision. It can easily accommodate about 16 to 17 digits after or before a decimal point.

Range: 1.7E-308 to 1.7E+308
Size: 8 bytes
Format Specifier: %lf
    */
    double val = 1.4521;
    
    printf("val = %lf", val);

    return 0;
}