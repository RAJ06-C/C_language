#include<stdio.h>
    #define MAX_SIZE 100
    #define GREETING "Hello, World!"

//CONSTANTS IN C

/*
In C programming, constants are fixed values that cannot be altered during the execution of a program. They are also known as literals or read-only variables. Constants ensure data integrity by preventing accidental modifications of important values. 
*/
int main(){
    //There are two primary ways to define constants in C

    /*
    Using the const keyword: This keyword declares a variable as constant, meaning its value cannot be changed after initialization.
    */
        const int myConstant = 10;
    const float PI = 3.14159;

    /*
    Using the #define preprocessor directive: This directive defines symbolic constants, which are essentially text substitutions performed by the preprocessor before compilation.
    */
    
    printf("the constant value of MAX_SIZE: %d",MAX_SIZE);
    printf("the constant variable GREETING : %S",GREETING);
    return 0;
}