#include<stdio.h>

void printstring(char str[]);

int main(){

    //STRINGS IN C

    /*
    A string is an array of characters terminated by a special character '\0' (null character). This null character marks the end of the string and is essential for proper string manipulation.

Unlike many modern languages, C does not have a built-in string data type. Instead, strings are implemented as arrays of char
    */

    //Declaration

    /*Declaring a string is as simple as declaring a one-dimensional array of character type. Below is the syntax for declaring a string*/
    
    char string[3];

    /*
    In the above syntax string_name is any name given to the string variable and size is used to define the length of the string, i.e. the number of characters strings will store.
    */
    
    // Initialization

    /*
    We can initialize a string either by specifying the list of characters or string literal.
    */

    // Using character list
    char str[] = {'R', 'a', 'j'};

    // Using string literal
    char strc[] = "Raj";

    //Accessing

    /*
    We can access any character of the string by providing the position of the character, like in array. We pass the index inside square brackets [] with the name of the string.
    */

    //example
    printf("example of string accessing\n");
    char str1[] = "kumar";
    
    // Access first character
    // of string
    printf("%c\n", str1[0]);

    //Update
    /*
    Updating a character in a string is also possible. We can update any character of a string by using the index of that character.
    */

    printf("example of update\n");
    
    // Update the first
    // character of string
    str1[0] = 'R';
    printf("%c\n", str1[0]);
    
    //String Length

    /*
    To find the length of a string in C, you need to iterate through each character until you reach the null terminator '\0', which marks the end of the string. This process is handled efficiently by the strlen() function from the C standard library
    */

    printf("example of string length\n");
    printf("%d\n", strlen(str1));

    //String Input

    /*
    In C, reading a string from the user can be done using different functions, and depending on the use case, one method might be chosen over another. Below, the common methods of reading strings in C will be discussed, including how to handle whitespace, and concepts will be clarified to better understand how string input works.
    */

    char str3[5];
      
    // Read string
    // from the user
    scanf("%s",str3);
      
    // Print the string
    printf("%s",str3);


    //Passing Strings to Function

    /*
    As strings are character arrays, we can pass strings to functions in the same way we pass an array to a function. Below is a sample program to do this
    */

    char printstr[]="hello hi wellcome to repo";

    //function call
    printstring(printstr);

    //Strings and Pointers in C

    /*
    Similar to arrays, In C, we can create a character pointer to a string that points to the starting address of the string which is the first character of the string. The string can be accessed with the help of pointers as shown in the below example.
    */

    printf("example of pointer string\n");
    char ptrstr[20]="learn_c";

    // Pointer variable which stores
    // the starting address of
    // the character array str
    char* ptr=ptrstr;

    // While loop will run till 
    // the character value is not
    // equal to null character
    while (*ptr !='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    
    return 0;
}

void printstring(char str[]){
    printf("%s\n",str);
}