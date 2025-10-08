#include <stdio.h>

int main()
{

    /*
    In C, programs can choose which part of the code to execute based on some condition. This ability is called decision making and the statements used for it are called conditional statements. These statements evaluate one or more conditions and make the decision whether to execute a block of code or not.
    */

    // ther are types of conditional statements in c
    //  if else
    // if else if
    // nested-if
    //  switch case statements

    // IF IN C
    /*
    The if statement is the simplest decision-making statement. It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statements is executed otherwise not.

A condition is any expression that evaluates to either a true or false (or values convertible to true or flase)
    */

    printf("\n\t\tthe example of if:\n");
    int age = 17;
    if (age < 18)
    {
        printf("you are cant drive\n");
    }
    // IF ELSE IN C
    /*

    The if statement alone tells us that if a condition is true, it will execute a block of statements and if the condition is false, it won’t. But what if we want to do something else when the condition is false? Here comes the C else statement. We can use the else statement with the if statement to execute a block of code when the condition is false. The if-else statement consists of two blocks, one for false expression and one for true expression.

    */

    printf("\n\t\tTHE EXAMPLE OF IF-ELSE IN C\n");
    int a = 10;
    if (a > 18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("you cant vote");
    }

    // NESTED IF ELSE IN C
    /*
    A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an if statement inside another if statement. Yes, C allow us to nested if statements within if statements, i.e, we can place an if statement inside another if statement.
    */

    printf("\n\t\tthis is the example of nested if else\n");
    int i = 10;

    if (i == 10)
    {
        if (i < 18)
            printf("Still not eligible for vote");
        else
            printf("Eligible for vote\n");
    }
    else
    {
        if (i == 20)
        {
            if (i < 22)
                printf("i is smaller than 22 too\n");
            else
                printf("i is greater than 25");
        }
    }

    //IF ELSE IF LADDER IN C

    /*
    The if else if statements are used when the user has to decide among multiple options. The C if statements are executed from the top down. As soon as one of the conditions controlling the if is true, the statement associated with that if is executed, and the rest of the C else-if ladder is bypassed. If none of the conditions is true, then the final else statement will be executed. if-else-if ladder is similar to the switch statement
    */

    printf("\n\t\tTHE IF-ELSE LADDER IN C\n");
    int j = 20;

    // If else ladder with three conditions
    if (j == 10)
        printf("Not Eligible");
    else if (j == 15)
        printf("wait for three years");
    else if (j == 20)
        printf("You can vote");
    else
        printf("Not a valid age");

    //SWITCH CASE STATEMENTS IN C
    printf("\n\t\tSWITCH CASE STATEMENTS IN C\n");
    
    int var = 18;

    // declaring switch cases
    switch (var) {
    case 15:
        printf("You are a kid");
        break;
    case 18:
        printf("Eligible for vote");
        break;
    default:
        printf("Default Case is executed");
        break;
    }
    
    return 0;
}