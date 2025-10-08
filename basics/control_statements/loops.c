#include <stdio.h>

int main()
{
    // LOOPS IN C
    /*
    n C programming, there is often a need for repeating the same part of the code multiple times. For example, to print a text three times, we have to use printf() three times
    */

    // But if we say to write this 20 times, it will take some time to write statement. Now imagine writing it 100 or 1000 times. Then it becomes a really hectic task to write same statements again and again. To solve such kind of problems, we have loops in programming languages

    printf("\n\t\t example of loops");
    for (int i = 0; i < 5; i++)
    {
        printf("im in loop\n");
    }

    // Types of Loops in C
    // for loop
    // while loop
    // do-while loop

    // for loop

    /*
    for loop is an entry-controlled loop, which means that the condition is checked before the loop's body executes
    */
    printf("\n\t\tEXAMPLE OF FOR LOOP\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", j + 1);
    }

    // while loop

    /*
    A while loop is also an entry-controlled loop in which the condition is checked before entering the body
    */

    printf("\n\t\tEXAMPLE OF WHILE LOOP\n");

    // Initialization expression
    int x = 0;

    // Test expression
    while (x <= 5)
    {
        printf("%d\t", x + 1);

        // update expression
        x++;
    }

    // do-while loop

    /*
    The do-while loop is an exit-controlled loop, which means that the condition is checked after executing the loop body. Due to this, the loop body will execute at least once irrespective of the test condition.
    */

    printf("\n\t\tEXAMPLE OF DO-WHILE LOOP\n");

    // Initialization expression
    int y = 0;

    do
    {
        // loop body
        printf("%d ", y);

        // Update expression
        y++;

        // Condition to check
    } while (y <= 10);

    return 0;
}