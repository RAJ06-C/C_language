#include<stdio.h>

// Basic Input and Output in C

/*In C, there are many input and output for different situations, but the most commonly used functions for Input/Output are scanf() and printf() respectively. These functions are part of the standard input/output library <stdio.h>. scanf() takes user inputs (typed using keyboard) and printf() displays output on the console or screen.*/
int main(){

    // OUTPUT IN C

    /*The printf() function is used to print formatted output to the standard output stdout (which is generally the console screen). It is one of the most commonly used functions in C*/

    /*
    Formatted String: string defining the structure of the output and include format specifiers
variables/values: arguments passed to printf() that will replace the format specifiers in the formatted string.
    */

    printf("formatted_string");

    /*The text inside "" is called a string in C. It is used to represent textual information. We can directly pass strings to the printf() function to print them in console screen.*/

    int age = 22;
  
    // Prints Age
    printf("%d\n", age);

    //fputs()

    /*The fputs() function is used to output strings to the files but we can also use it to print strings to the console screen.*/

    fputs("This is my string", stdout);

    //INPUT IN C

    /*scanf() is used to read user input from the console. It takes the format string and the addresses of the variables where the input will be stored.*/

    int age1;
    printf("Enter your age: ");
  
    // Reads an integer
    scanf("%d", &age1);  
  
    // Prints the age
    printf("Age is: %d\n", age1);

    /*%d is used to read an integer; and &age provides the address of the variable where the input will be stored.*/

    char ch;
    printf("Enter a character: \n");
  
    // Reads an Character
    scanf("%c", &ch);  
  
    // Prints the Character
    printf("Entered character is: %c\n", ch);

    /*the %c is used to read the charecter*/


    /*
    Reading a string
The scanf() function can also be used to read string input from users. But it can only read single words
    */
   char str[100];  // Declare an array to hold the input string

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until the first space or newline

    printf("You entered: %s\n", str);

    
    //fgets()

    /*
    fgets() reads the given number of characters of a line from the input and stores it into the specified string. It can read multiple words at a time.
    */

    // String variable
    char name[20];
    
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin);
    
    printf("Hello, %s", name);


    return 0;
}