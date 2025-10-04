# 🔐 Keywords in C

In C programming, **keywords** (also called *reserved words*) are special words that have predefined meanings in the language. You **cannot** use them as names for variables, functions, or identifiers. The compiler treats them differently—they form part of C’s syntax.

---

## 📋 What Are Keywords?

- Keywords are part of the **C language grammar**—they’re reserved by the language.
- They cannot be redefined or used for any other purpose (like naming a variable).
- If you try to use them as identifiers (e.g. `int return = 5;`), the compiler will report an error.  
  > Example:
  > ```c
  > int return = 10;  // error: ‘return’ is a keyword
  > printf("%d\n", return);
  > ```

---

## 🧭 Categorization of Keywords

Keywords can be grouped by their usage/context to help you understand them better. Below is a categorization:

| Category                      | Keywords                                                                 |
|------------------------------|---------------------------------------------------------------------------|
| **Data Type Keywords**       | `char`, `int`, `float`, `double`, `void`, `short`, `long`, `signed`, `unsigned` |
| **Storage Class Keywords**   | `auto`, `register`, `static`, `extern`                                  |
| **Type Qualifiers**          | `const`, `volatile`                                                      |
| **Control Flow / Decision**  | `if`, `else`, `switch`, `case`, `default`, `do`, `while`, `for`, `break`, `continue` |
| **Jump / Other Keywords**    | `return`, `goto`                                                         |
| **Derived Type / Compound** | `struct`, `union`, `enum`, `typedef`                                     |
| **Utility / Operator**        | `sizeof`                                                                 |
| **Other / Extra**             | (In some dialects) `volatile` (already above), `register` etc.          |

> Note: The exact set of keywords may vary slightly depending on the C standard version (C89, C99, C11, C18).  
> As of modern C standards, there are 32–37 keywords (depending on compiler).  

---

## 🛠 Why Keywords Matter

- They define the **syntax** and structure of C programs.
- They help the compiler parse and understand what your code means.
- Using a keyword incorrectly (e.g. as a variable name) leads to compilation errors.
- Knowing keywords helps you read and write code more accurately and avoid subtle mistakes.

---

## 🧪 Examples & Notes

### 1. Using `sizeof`
```c
#include <stdio.h>

int main() {
    int a;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(double));
    return 0;
}
