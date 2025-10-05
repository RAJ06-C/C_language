#include<stdio.h>

// VARIABLES IN C


/*
A variable in C is a named piece of memory which is used to store data and access it whenever required. It allows us to use the memory without having to memorize the exact memory address.

To create a variable in C, we have to specify a name and the type of data it is going to store in the syntax.
*/

int main(){
    // declaration of variables
    printf("this is the syntax for variables: data_type name;\n\n");

    int num; //numer variable
    char letter; //letters are stored in char
    float decimal;//floating number is stored in variable 

    printf("heare is the example for variables\n");
    // storing a values in variable method 1

    num=25;
    letter='A';
    decimal=19.02;

    // now we can print the variables like
    printf("\t\taccessing the variables\n");
    printf("the numer stored in num: %d\n",num);
    printf("the latter stored in the letter variable: %c\n",letter);
    printf("the decimal stored in the decimal: %.2f\n\n",decimal);

    //storin a values in variable method 2
    
    int number=30;
    char charecter='R';
    float floting=99.99;

    printf("\t\taccessing the variables\n");
    printf("the numer stored in number: %d\n",number);
    printf("the latter stored in the letter charecter: %c\n",charecter);
    printf("the decimal stored in the floting: %.2f\n\n",floting);

    // MEMORY ALLOATION OF C VARIABLES

    /*
    When a variable is declared, the compiler is told that the variable with the given name and type exists in the program. But no memory is allocated to it yet. Memory is allocated when the variable is defined.

Most programming languages like C generally declare and define a variable in the single step. For example, in the above part where we create a variable, variable is declared and defined in a single statement.

The size of memory assigned for variables depends on the type of variable. We can check the size of the variables using sizeof operator.
    */
   int Number = 22;
    
    // Finding size of num
    printf("\tprinting the size of data type\n");
    printf("\n%d bytes", sizeof(Number));

    return 0;
}