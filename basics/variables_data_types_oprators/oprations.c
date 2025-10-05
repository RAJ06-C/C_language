#include <stdio.h>
#include <stdbool.h>

// OPRATOR PRECEDENCE AND ASSOCIATIVITY IN C

/*
Operator precedence and associativity are rules that decide the order in which parts of an expression are calculated. Precedence tells us which operators should be evaluated first, while associativity determines the direction (left to right or right to left) in which operators with the same precedence are evaluated.
*/
int oprations_c(); // finction declaration
int bitwise_ops_c();
int main()
{

    oprations_c(); // function calling

    int a = 6, b = 3, c = 4;
    int result;

    // precedence and associativity applied here

    printf("\n\t\tPROCEDENCE AND ASSOCIATIVITY\n");
    result = a + b * c / 2;
    printf("%d\n", result);

    // the above opration result work like 6+((3*4)/2)=12
    //  * and / hace higher priority

    // ANOTHER EXAMPLE
    printf("\n%d\n", 10 + 20 * 30);

    // now if we consider
    int exp = 100 + 200 / 10 - 3 * 10;

    /*
    the compalation process starts from left to right
    in exp firt / hace the higher priorety and it will evaluated first
    * opration also evaluated after /
    and + after -

    */

    printf("%d\n", exp);

    return 0;
}

// function declaration

int oprations_c()
{
    /*
    In C programming, "operations" typically refers to the actions performed on data using operators. Operators are special symbols that instruct the compiler to perform specific mathematical, relational, logical, or bitwise computations
    */

    // Here are the main categories of operators in C:

    // ARITHAMETIC OPRATORS: used for mathamatical calculations
    printf("\n\t\tARITHAMETIC OPRATORS\n");
    printf("this is a addition opration of 2+7: %d\n", 2 + 7);
    printf("this is a subtraction opration of 2-7: %d\n", 2 - 7);
    printf("this is a multiplication opration of 2*7: %d\n", 2 * 7);
    printf("this is a division opration of 10/2: %d\n", 10 / 2);
    printf("this is a (modulus-remainder of division) opration of 10%2: %d\n", 10 % 2);

    // RELATIONAL OPRATORS:used to compare two operands and return a boolean result (true of false)
    //  to use boolean valuse in c we nead to include stdbool.h header
    //  in case of 1 it is true and in case of 0 its false

    int a = 25, b = 5;

    // useing of relational oprators
    printf("\n\t\tuseing of relational oprators\n");
    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n", a != b);

    //LOGICAL OPERATORS: use to combine or invert logical expressions

    int x=10,y=20;

    // use of logical operators
    printf("\n\t\tLOGICAL OPERATORS\n");
    printf("the and opration in between (x=10 && y=20): %d\n",x && y);
    printf("the or opration: %d\n",x || y);
    printf("the not opration: %d\n",!x);

    bitwise_ops_c();

}

int bitwise_ops_c(){
    // Bitwise Operators: Used to perform operations at the bit level.
    
    int x=30,y=26;

    printf("\n\t\t BITWISE OPRATORS\n");

    printf("the AND operation: %d\n",x & y);
    printf("the OR operation: %d\n",x | y);
    printf("the XOR operation: %d\n",x ^ y);
    printf("the complament operation: %d\n",~(x & y));
    printf("the left shift operation: %d\n",x<<y);
    printf("the right shift operation: %d\n",x>>y);

    //ASSIGNMENT OPERATORS:Used to assign a value to a variable
    printf("\n\t\t ASSINGNMENT OPERATIONS\n");

    int b=5;
    char c='%';
    printf("= (Simple assignment) like b=5\n");
    printf("+= operation is b=b+1: %d\n",b+=1);
    printf("-= operation is b=b-1: %d\n",b-=1);
    printf("*= operation is b=b*1: %d\n",b*=1);
    printf("/= operation is b=b/1: %d\n",b/=1);
    // %= operation is b=b%1
    printf("%c= operation is b=b%c1: %d\n",c,b%=1);
    printf("&= operation is b=b&1: %d\n",b&=1);
    printf("|= operation is b=b|1: %d\n",b|=1);
    printf("^= operation is b=b^1: %d\n",b^=1);
    printf("<<= operation is b=b<<1: %d\n",b<<=1);
    printf(">>= operation is b=b>>1: %d\n",b>>=1);

    //SPECIAL OPERATORS
    int z=2;

    printf("\n\t\tSPECIAL OPERATORS\n");
    printf("sizeof (Returns the size of a variable or data type) : %d\n",sizeof(z));
    // , (Comma operator - evaluates expressions from left to right)f
    printf(", (Comma operator - evaluates expressions from left to right)\n");
    printf("& (Address-of operator - returns the memory address of a variable)\n");
    printf("* (Pointer dereference operator - accesses the value at a memory address)\n");


}