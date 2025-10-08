# 🤩 STRINGS IN C

*In C programming, a string is fundamentally a one-dimensional array of characters that is always terminated by a special character known as the null terminator, represented as \0. This null terminator signifies the end of the string, allowing functions to correctly determine its length and boundaries.*

- ## Declaration and Initialization:

***Using a string literal**: This is the most common way to declare and initialize a string. The compiler automatically adds the null terminator.**

- C
    ```
        char greeting[] = "Hello, World!"; 
    ```
***Using a character array with explicit null termination:** You can explicitly define each character, including the null terminator.**

- C
    ```
        char name[] = {'J', 'o', 'h', 'n', '\0'};
    ```
***Declaring a fixed-size array:** You can specify the maximum size of the string. Ensure it's large enough to hold the string and the null terminator.**

- C
    ```
        char city[20]; // Can hold up to 19 characters + null terminator
    ```
---

- ## String Manipulation Functions:

C provides a set of standard library functions (in `<string.h>`) for manipulating strings

- `strcpy(destination, source)`: Copies the `source` string to the `destination` string.

- `strcat(destination, source)`: Concatenates (joins) the `source` string to the end of the `destination` string.


- `strlen(string)`: Returns the length of the string (number of characters before the null terminator). 

- `strcmp(string1, string2)`: Compares two strings lexicographically. Returns 0 if equal, a negative value if `string1` is less than `string2`, and a positive value if `string1` is greater than `string2`.

- `strchr(string, character)`: Finds the first occurrence of a character within a string.

- `strstr(string, substring)`: Finds the first occurrence of a substring within a string

---

- ## Input and Output:

- **Printing strings:** Use `printf("%s", string_variable)`;

- **Reading strings:**

    -   `scanf("%s", string_variable);`: Reads a string until a whitespace character is encountered. Be cautious of buffer overflows if the input is longer than the array's capacity.

    -   `fgets(string_variable, size, stdin);`: Reads a complete line, including spaces, up to `size-1` characters or until a newline character is encountered. This is generally safer than `scanf` for reading strings with spaces.

- ## Important Considerations:

- Null Terminator `(\0)`: This character is crucial for correctly handling strings in C. Without it, string functions might read beyond the intended string boundaries, leading to errors or crashes.

- Buffer Overflows: When copying or reading strings, ensure the destination array has enough space to prevent writing beyond its allocated memory, which can lead to security vulnerabilities. `fgets` and `strncpy` are safer alternatives to `scanf` and `strcpy` when dealing with potentially unbounded input.