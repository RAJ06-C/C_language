# ⚙️ Installing & Setting Up C Programming Environment

To write and run C programs, you’ll need:
- A **C compiler** (like GCC or Turbo C)
- A **code editor** or **IDE** (like VS Code, Code::Blocks, or Dev-C++)

This guide will help you install and configure your environment step-by-step. 🚀

---

## 🖥️ 1. Installing on Windows

### ✅ Option 1: Using Code::Blocks (Recommended)
1. Go to [https://www.codeblocks.org/downloads/](https://www.codeblocks.org/downloads/)
2. Download **Code::Blocks with MinGW** setup.
3. Install it and open Code::Blocks.
4. Create a new project → *Console Application* → *C Language*.
5. Type and run your first C program.

> 💡 Code::Blocks comes with a built-in GCC compiler, so no extra installation is required.

---

### ✅ Option 2: Using GCC with VS Code
1. Download **MinGW** from [https://www.mingw-w64.org/](https://www.mingw-w64.org/)
2. Install it (prefer `C:\mingw-w64`)
3. Add `C:\mingw-w64\bin` to **System PATH**
4. Install **VS Code** from [https://code.visualstudio.com/](https://code.visualstudio.com/)
5. In VS Code, install extensions:
   - **C/C++** (by Microsoft)
   - **Code Runner** (optional)
6. Open a `.c` file and run it using:
    ```bash
   gcc filename.c -o output
   ./output

---

###🧑‍💻 2. Installing on Linux / macOS

***🐧 For Linux (Ubuntu/Debian):

    ```bash
    
    -sudo apt update
    -sudo apt install build-essential


***To compile and run:

    ```bash
    gcc filename.c -o output
    ./output

---

###🍎 For macOS:

####-Install Xcode Command Line Tools:

    ```bash
    -xcode-select --install


**Then compile and run as usual:

    ```bash
    -gcc filename.c -o output
    -./output

---

###🧠 Verify Your Setup

   ***-Run this command in terminal or command prompt:
    
    ```bash
    gcc --version

   *** If it shows a version number (e.g., gcc 13.2.0), your setup is complete! 🎉




    
---

## 🧩 2️⃣ `/basics/structure_and_compilation/README.md`  
### 📘 **Structure of a C Program & Compilation Process**

```markdown
# 🧠 Structure of a C Program & Compilation Process

Before writing complex programs, it’s essential to understand **how a C program is structured** and **how it gets executed**.

---

## 🏗️ Structure of a C Program

Every C program follows a specific format. Let’s look at an example 👇

```c
#include <stdio.h>     // Header file inclusion

// Function declaration
void greet();

int main() {           // Main function
    printf("Hello, World! 🌎\n");
    greet();           // Function call
    return 0;          // Exit status
}

// Function definition
void greet() {
    printf("Welcome to C Programming!\n");
}

