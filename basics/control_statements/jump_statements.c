#include<stdio.h>

int main(){

    /*
    In C programming, break, continue, and goto are jump statements used to alter the normal flow of program execution
    */    

    //BREAK STATEMENT
    printf("\n\t\tBREAK STATEMENT\n");
    /*
    The break statement is used to terminate the execution of the innermost loop ( for, while, do-while) or a switch statement immediately. When break is encountered, control transfers to the statement immediately following the loop or switch block. 
    */
   printf("example of break:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\nLoop terminated.\n");

    //CONTINUE STATEMENT

    /*
    
    The continue statement is used within loops to skip the remaining statements in the current iteration and proceed to the next iteration of the loop.

    */
    printf("\n\t\tCONTINUE STATEMENT\n");
    printf("example of continue:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 3) {
            continue; // Skip the rest of the current iteration when i is 3
        }
        printf("%d ", j);
    }
    printf("\nLoop finished.\n");
    
    // GOTO STATEMENT
    
    /*
    The goto statement allows for an unconditional jump to a labeled statement anywhere within the same function. It requires a label, which is an identifier followed by a colon
    */
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        goto even_label;
    } else {
        goto odd_label;
    }

even_label:
    printf("%d is an even number.\n", num);
    return 0;

odd_label:
    printf("%d is an odd number.\n", num);
    return 0;
return 0;

}