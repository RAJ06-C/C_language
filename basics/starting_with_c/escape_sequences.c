#include <stdio.h>

// ESCAPE SEQUENCES IN C LANGUAGE

/*
In C programming, an escape sequence is a sequence of characters used within string literals or character constants to represent special characters that are difficult or impossible to type directly, or to represent non-printable characters. Escape sequences always begin with a backslash (`\`) followed by a specific character or sequence of characters

*/

// USES OF COMMENTS IN C LANGUAGE

/*
In the C programming language, comments are used to add explanatory notes within the source code. These notes are ignored by the compiler and do not affect the program's execution. They serve to improve code readability and maintainability for developers
*/
void comments()
{
    printf("\nthere are two types of comments in c \nsingle line comments and \nmultiline comments\n");
    printf("// this is how use of single line comments\n");
    printf("\n/*this is how we can \nleave message in c language \nthis method we can call \n multi-line comment*/\n");
};

void main()
{

    // \n: Newline character. Moves the cursor to the beginning of the next line.

    // BEFORE
    printf("ESCAPE SEQUENCES\033\n");
    printf("this escape sequence print in new line\n");
    printf("now you can see how it work");

    // AFTER
    printf("now you can see the result\n");
    printf("now it will print in new line\n");

    // \t: Horizontal tab. Inserts a tab space.
    printf("it will provide tab space in line\t now you can see result\n");

    // \a: Audible bell (alert). Produces a system beep or sound.
    printf("it will produce a beel\a\n");

    // \b: Backspace. Moves the cursor back one position

    printf("now you can see how \b work in c\n");

    printf("USE OF COMMENTS IN C \033\n");

    comments();

    // return 0;
}