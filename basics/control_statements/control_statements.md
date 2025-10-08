# 😎 CONDITIONAL STATEMENTS IN C
 
**In C, programs can choose which part of the code to execute based on some condition. This ability is called decision making and the statements used for it are called conditional statements. These statements evaluate one or more conditions and make the decision whether to execute a block of code or not**
---
## The types of conditional statements in C are

- `if-else:` Executes one block of code if the condition is true and another block if the condition is false

- `if-else if:` Used when you need to check multiple conditions sequentially

- **Nested** `if`: Placing an `if` statement inside another `if` or `else if` statement

- `switch-case` statements: A multi-way branching statement that provides an efficient way to transfer execution to different parts of code based on the value of a single expression

---

## IF IN C

*The if statement is the simplest decision-making statement. It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statements is executed otherwise not*

*A condition is any expression that evaluates to either a `true` or `false` (or values convertible to true or flase)*

- syntax
```
if (condition){
    //statement
}
```
---
## IF ELSE IN C

*The if statement alone tells us that if a condition is true, it will execute a block of statements and if the condition is false, it won’t. But what if we want to do something else when the condition is false? Here comes the C else statement. We can use the else statement with the if statement to execute a block of code when the condition is false. The if-else statement consists of two blocks, one for false expression and one for true expression*

- syntax
```
if (condition) {
    // Code to be executed if the condition is true
} else {
    // Code to be executed if the condition is false
}
```
---
## NESTED IF ELSE IN C


*A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an if statement inside another if statement. Yes, C allows us to nested if statements within if statements, i.e, we can place an if statement inside another if statement*

- syntax
```
if (outer_condition) {
    // Code block for outer_condition being true

    if (inner_condition) {
        // Code block for both outer_condition and inner_condition being true
    } else {
        // Code block for outer_condition being true, but inner_condition being false
    }
} else {
    // Code block for outer_condition being false
}
```
---

## IF ELSE IF LADDER IN C

*The if-else if statements are used when the user has to decide among multiple options. The C if statements are executed from the top down. As soon as one of the conditions controlling the if is true, the statement associated with that if is executed, and the rest of the C else-if ladder is bypassed. If none of the conditions is true, then the final else statement will be executed. If-else-if ladder is similar to the switch statement*

- syntax
```
if (condition1) {
    // Code to be executed if condition1 is true
} else if (condition2) {
    // Code to be executed if condition1 is false and condition2 is true
} else if (condition3) {
    // Code to be executed if condition1 and condition2 are false, and condition3 is true
}
// ... (more else if clauses as needed)
else {
    // Code to be executed if all preceding conditions are false
}

```
---

# 😃 LOOPS IN C

**Loops in C programming are control flow statements that allow a block of code to be executed repeatedly until a specific condition is met. They are essential for automating repetitive tasks and handling large datasets efficiently.**

---
##  There are three main types of loops in C:


-   ## foor loop
-   ## while loop
-   ## do-while loop

---

## for loop

*for loop is an `entry-controlled` loop, which means that the condition is checked before the loop's body `executes`*

- syntax
```
    for (initialization; condition; update) {
        // code to be executed repeatedly
    }
```
---
## while loop

*A `while loop` is also an `entry-controlled` loop in which the condition is checked before entering the body*

- syntax
```
    while (condition) {
        // code to be executed repeatedly
    }
```
---
## do-while loop

*The do-while loop is an exit-controlled loop, which means that the condition is checked after executing the loop body. Due to this, the loop body will execute at least once, irrespective of the test condition.*

- syntax
```
    do {
        // code to be executed repeatedly
    } while (condition);
```

# 🦘 JUMPING STATEMENTS IN C

 **Jump statements in C alter the normal sequential flow of program execution. There are three primary jump statements in C: `break`, `continue`, and `goto`**

 ## types of jump statements 

 -  ## `break`
 -  ## `continue`
 -  ## `goto`
 ---

 ## break statement:

 ***Purpose:** Terminates the innermost `switch` statement or loop (`for`, `while`, `do-while`) it is contained within. Execution resumes at the statement immediately following the terminated block.**
 
 - syntac
 ```
 break;

 ```
---

 ## continue statement

 ***Purpose:** Skips the remaining statements within the current iteration of a loop (`for`, `while`, `do-while`) and proceeds to the next iteration.**

 - syntax
 ```
 continue;
 ```
 ---

 ## goto statement

 ***Purpose:** Transfers program control unconditionally to a specified labeled statement within the same function**

 - syntax
 ```
 goto label;
// ... some code ...
label: statement;
```


---
