# C · PROGRAMMING

> The language that built the modern world — written in 1972, still powering everything beneath your feet.

```
Language   : C (ANSI C89 / C99 / C11 / C17)
Created    : 1972 · Dennis Ritchie · Bell Labs, USA
Paradigm   : Procedural, Structured, Imperative
Runs On    : Compiled to native machine code — no runtime needed
```

---

## § Table of Contents

```
01  Origin & History
02  Why C Is Called the Mother Language
03  Compiler vs Interpreter
04  Setting Up — Editor & Toolchain
05  Program Structure & Build Pipeline
06  Preprocessor & Header Files
07  Data Types & Variables
08  Operators & Expressions
09  Input / Output
10  Control Flow
11  Loops
12  Functions
13  Arrays & Strings
14  Pointers
15  Structures, Unions & Enums
16  Memory Management
17  File Handling
18  Preprocessor Macros
19  Error Handling & Debugging
20  Advanced Concepts
21  System-Level Concepts
22  C vs Python — Quick Reference
23  Practice Projects
24  Reference — The Book
```

---

## 01 · Origin & History

### The Problem

By the late 1960s, computers were massive, expensive machines programmed entirely in **Assembly language** — tied to specific hardware, unportable, and brutally difficult to maintain.

Bell Labs was building **UNIX**, but it was written in Assembly:
- Slow to develop
- Hard to read
- Could not be moved to different machines

The question became: *Can we write an operating system in a human-readable language that still talks directly to hardware?*

### The Evolution

```
Machine Code
    └─ ALGOL (1958)      — structured, academic
         └─ BCPL (1967)  — Ken Thompson / Martin Richards · typeless, system-level
              └─ B (1970) — Ken Thompson · simpler BCPL for PDP-7
                   └─ C (1972) — Dennis Ritchie · typed, compiled, portable
```

### The Breakthrough

In 1973, the entire UNIX operating system was **rewritten in C**.  
This was unprecedented — an OS in a high-level language — and it worked everywhere.

```
UNIX → Linux Kernel → Windows Core → macOS kernel
     → Compilers (GCC, Clang) → Databases → Device Drivers
     All written in C.
```

> Dennis Ritchie and Ken Thompson were awarded the **Turing Award** (the Nobel Prize of computing) in 1983 for this work.

**Reference:** *The C Programming Language* — Brian W. Kernighan & Dennis M. Ritchie (K&R, 1978)

### Timeline

| Year | Event |
|------|-------|
| 1960s | ALGOL inspires structured programming |
| 1967 | BCPL created — Martin Richards, Cambridge |
| 1970 | B language — Ken Thompson, Bell Labs |
| 1972 | C language — Dennis Ritchie, Bell Labs |
| 1973 | UNIX rewritten in C |
| 1978 | K&R book published — first C standard |
| 1989 | ANSI C (C89) — first official standard |
| 1999 | C99 — new features (inline, `//` comments, VLAs) |
| 2011 | C11 — threading, atomic types |
| 2017 | C17 — current stable standard |

**Watch:**
- [C Programming Full Course — freeCodeCamp](https://www.youtube.com/watch?v=KJgsSFOSQv0)
- [History of C — Fireship](https://www.youtube.com/watch?v=U3aXWizDbQ4)

---

## 02 · Why C Is Called the Mother Language

Nearly every major programming language is either written in C, inspired by C's syntax, or descended from it.

| Language     | Relation to C                          |
|--------------|----------------------------------------|
| C++          | Direct superset of C                   |
| Java         | C-like syntax, JVM written in C        |
| C#           | Inspired by C and C++                  |
| Python       | CPython interpreter is written in C    |
| JavaScript   | C-style syntax and operators           |
| PHP          | Written in C                           |
| Go           | Designed by C authors (Kernighan, Pike)|
| Rust         | Systems-level; heir to C's domain      |
| Swift        | Compiled via LLVM — a C++ project      |

> "If you know C, learning other languages becomes significantly easier — because you understand what the machine is actually doing."

**Why it matters:**
- Direct memory access — pointers
- No garbage collector — you control allocation
- Compiles to native machine code — maximum speed
- Runs on any hardware: microcontrollers to supercomputers

**Watch:**
- [Why C is So Influential — Computerphile](https://www.youtube.com/watch?v=ci1PJexnfNE)

---

## 03 · Compiler vs Interpreter

### Compiler

Translates the **entire** source file to machine code before execution.

```
source.c  →  preprocessor  →  compiler  →  assembler  →  linker  →  a.out (executable)
```

- Error found → program does not run at all
- Output is a standalone binary — fast
- **C, C++, Go, Rust** use compilers

### Interpreter

Translates and executes code **line by line** at runtime.

```
source.py  →  interpreter  →  executes line  →  next line  →  ...
```

- Stops immediately on error
- No separate binary produced — slower
- **Python, Ruby, JavaScript** use interpreters

### Comparison

| Property              | Compiler (C)          | Interpreter (Python)     |
|-----------------------|-----------------------|--------------------------|
| Translation           | All at once           | Line by line             |
| Speed                 | Fast (native binary)  | Slower (runtime overhead)|
| Error detection       | Before execution      | At the error line        |
| Output                | Executable file       | No binary produced       |
| Memory control        | Manual                | Automatic (GC)           |
| Portability           | Compile per platform  | Single script runs anywhere |

> Java is partially both — compiled to bytecode, then interpreted by JVM (with JIT compilation).

**Watch:**
- [Compiler vs Interpreter — Web Dev Simplified](https://www.youtube.com/watch?v=I1f45REi3k4)

---

## 04 · Setting Up — Editor & Toolchain

### Recommended: VS Code + GCC

```bash
# Install GCC (Linux/macOS)
sudo apt install gcc          # Ubuntu/Debian
brew install gcc              # macOS (Homebrew)

# Windows: Install MinGW or use WSL
# https://www.mingw-w64.org/

# Verify
gcc --version
```

**VS Code Extensions to install:**
- `C/C++` — Microsoft (IntelliSense, debugging)
- `C/C++ Compile Run` — for quick single-file runs

### Other Editors

| Editor        | Best For                         |
|---------------|----------------------------------|
| VS Code       | General development — recommended|
| Code::Blocks  | Beginners — IDE with built-in GCC|
| CLion         | Professional — JetBrains IDE     |
| Vim / Neovim  | Terminal-first development       |
| Dev-C++       | Windows beginners                |

### Compile & Run

```bash
# Compile
gcc hello.c -o hello

# Run
./hello

# Compile with warnings enabled (recommended always)
gcc -Wall -Wextra -o hello hello.c

# Compile for C99 standard
gcc -std=c99 -Wall -o hello hello.c
```

**Watch:**
- [Setting Up C in VS Code — Caleb Curry](https://www.youtube.com/watch?v=77v-Poud_io)

---

## 05 · Program Structure & Build Pipeline

### Minimal C Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

**Output**
```
Hello, World!
```

### Structure Breakdown

| Component             | Role                                                       |
|-----------------------|------------------------------------------------------------|
| `#include <stdio.h>`  | Preprocessor directive — imports standard I/O declarations |
| `int main()`          | Entry point — execution starts here                        |
| `{ }`                 | Block — groups statements                                  |
| `printf(...)`         | Outputs formatted text to stdout                           |
| `\n`                  | Escape sequence — newline character                        |
| `return 0`            | Returns 0 to OS — signals successful execution             |

### Build Pipeline (detailed)

```
hello.c
  │
  ├─ [1] Preprocessor  →  hello.i   (macros expanded, includes pasted)
  ├─ [2] Compiler      →  hello.s   (C → Assembly)
  ├─ [3] Assembler     →  hello.o   (Assembly → object code)
  └─ [4] Linker        →  hello     (links libraries → final executable)
```

```bash
# See each stage manually
gcc -E hello.c -o hello.i    # preprocessed
gcc -S hello.c -o hello.s    # assembly
gcc -c hello.c -o hello.o    # object file
gcc hello.o -o hello         # link
```

**Watch:**
- [How C Programs Are Compiled — Low Level Learning](https://www.youtube.com/watch?v=N2y6csonII4)

---

## 06 · Preprocessor & Header Files

### The `#` Symbol

Any line beginning with `#` is a **preprocessor directive** — handled before compilation begins.

```
# → "This instruction is for the preprocessor, not the compiler"
```

### Preprocessor Stages

```
Your code
  └─ Preprocessor runs first
       ├─ #include  → paste file contents here
       ├─ #define   → replace shortcuts with values
       ├─ #ifdef    → conditional compilation
       └─ Remove all comments
  └─ Clean code passed to compiler
```

### `#include`

```c
#include <stdio.h>    // angle brackets = system/library header
#include "myfile.h"   // quotes = your own header file
```

`#include` literally **copies and pastes** the contents of the file at that position.

### `stdio.h` — Standard I/O

| Function   | Purpose              |
|------------|----------------------|
| `printf`   | Print to stdout      |
| `scanf`    | Read from stdin      |
| `fgets`    | Safe line input      |
| `fprintf`  | Print to file/stream |
| `fopen`    | Open a file          |

### Common Standard Headers

| Header       | Contents                                      |
|--------------|-----------------------------------------------|
| `<stdio.h>`  | printf, scanf, file I/O                       |
| `<stdlib.h>` | malloc, free, exit, atoi                      |
| `<string.h>` | strlen, strcpy, strcmp, strcat                |
| `<math.h>`   | sqrt, pow, sin, cos, log                      |
| `<ctype.h>`  | isalpha, isdigit, toupper, tolower            |
| `<time.h>`   | time, clock, difftime                         |
| `<stdbool.h>`| bool, true, false (C99+)                      |
| `<limits.h>` | INT_MAX, CHAR_MIN, etc.                       |

### Creating Your Own Header

```c
// mymath.h
#ifndef MYMATH_H      // include guard — prevents double inclusion
#define MYMATH_H

int add(int a, int b);
int square(int n);

#endif
```

```c
// mymath.c
#include "mymath.h"

int add(int a, int b) { return a + b; }
int square(int n)     { return n * n; }
```

**Watch:**
- [C Preprocessor Explained — Jacob Sorber](https://www.youtube.com/watch?v=6KNdGnUiRBM)

---

## 07 · Data Types & Variables

### Primitive Data Types

| Type       | Size      | Range                          | Format Specifier |
|------------|-----------|--------------------------------|-----------------|
| `char`     | 1 byte    | -128 to 127                    | `%c`            |
| `int`      | 4 bytes   | -2,147,483,648 to 2,147,483,647| `%d`            |
| `short`    | 2 bytes   | -32,768 to 32,767              | `%hd`           |
| `long`     | 4–8 bytes | system dependent               | `%ld`           |
| `long long`| 8 bytes   | ±9.2 × 10¹⁸                   | `%lld`          |
| `float`    | 4 bytes   | ~6–7 decimal digits            | `%f`            |
| `double`   | 8 bytes   | ~15–16 decimal digits          | `%lf`           |
| `void`     | —         | No value                       | —               |

### Type Modifiers

```c
unsigned int  count = 4000000000U;  // no negatives — doubles upper range
signed char   temp  = -40;
short int     port  = 8080;
long long int big   = 9223372036854775807LL;
```

### Variable Declaration & Initialization

```c
int age;           // declaration
age = 25;          // assignment

float pi = 3.14f;  // declaration + initialization

const int MAX = 100; // constant — value cannot change
```

### Scope

```c
int globalVar = 10;      // global — accessible everywhere in file

int main() {
    int localVar = 5;    // local — lives only inside main()
    
    {
        int blockVar = 3; // block scope — dies at closing brace
    }
    // blockVar is inaccessible here
    return 0;
}
```

### `sizeof` Operator

```c
printf("int    : %zu bytes\n", sizeof(int));
printf("double : %zu bytes\n", sizeof(double));
printf("char   : %zu bytes\n", sizeof(char));
```

**Watch:**
- [C Data Types — Bro Code](https://www.youtube.com/watch?v=3ItEHmM-6FI)

---

## 08 · Operators & Expressions

### Arithmetic

| Operator | Operation      | Note                              |
|----------|----------------|-----------------------------------|
| `+`      | Addition       |                                   |
| `-`      | Subtraction    |                                   |
| `*`      | Multiplication |                                   |
| `/`      | Division       | Integer division truncates in C   |
| `%`      | Modulo         | Integers only                     |

```c
int a = 7, b = 2;
printf("%d\n", a / b);   // 3 (not 3.5 — truncated)
printf("%d\n", a % b);   // 1
```

### Relational

| Operator | Meaning               | Returns  |
|----------|-----------------------|----------|
| `==`     | Equal to              | `1` or `0` |
| `!=`     | Not equal to          | `1` or `0` |
| `>`      | Greater than          | `1` or `0` |
| `<`      | Less than             | `1` or `0` |
| `>=`     | Greater than or equal | `1` or `0` |
| `<=`     | Less than or equal    | `1` or `0` |

> In C there is no `bool` keyword in C89 — comparisons return `int`: `1` = true, `0` = false.  
> C99+ provides `<stdbool.h>` with `bool`, `true`, `false`.

### Logical

| Operator | Meaning | Short-circuits |
|----------|---------|---------------|
| `&&`     | AND     | Yes — stops if left is false |
| `\|\|`   | OR      | Yes — stops if left is true |
| `!`      | NOT     | — |

### Assignment

```c
x = 5;    x += 3;    x -= 2;
x *= 4;   x /= 2;    x %= 3;
```

### Increment / Decrement

```c
int i = 5;
printf("%d\n", i++);  // prints 5, then i becomes 6 (post-increment)
printf("%d\n", ++i);  // i becomes 7, then prints 7 (pre-increment)
```

### Bitwise

| Operator | Meaning              | Example                         |
|----------|----------------------|---------------------------------|
| `&`      | AND                  | `5 & 3` → `001` = 1            |
| `\|`     | OR                   | `5 \| 3` → `111` = 7           |
| `^`      | XOR                  | `5 ^ 3` → `110` = 6            |
| `~`      | Complement           | `~5` → `-6`                    |
| `<<`     | Left shift           | `1 << 3` = 8                   |
| `>>`     | Right shift          | `8 >> 2` = 2                   |

### Ternary (Conditional)

```c
int max = (a > b) ? a : b;
// equivalent to: if (a > b) max = a; else max = b;
```

### `sizeof` & Address

```c
int x = 42;
printf("Size : %zu bytes\n", sizeof(x));  // 4
printf("Addr : %p\n", (void*)&x);         // memory address of x
```

### Operator Precedence (high → low)

```
()  []  ->  .              (highest)
!  ~  ++  --  &  *  sizeof
*  /  %
+  -
<<  >>
<  <=  >  >=
==  !=
&
^
|
&&
||
?:
=  +=  -=  ...            (lowest)
```

**Watch:**
- [C Operators — Neso Academy](https://www.youtube.com/watch?v=Yr4YRiMZFT4)

---

## 09 · Input / Output

### Output — `printf`

```c
printf("format string", arg1, arg2, ...);
```

**Format Specifiers**

| Specifier | Type           |
|-----------|----------------|
| `%d`      | int            |
| `%f`      | float / double |
| `%lf`     | double (scanf) |
| `%c`      | char           |
| `%s`      | string         |
| `%p`      | pointer        |
| `%x`      | hex integer    |
| `%o`      | octal integer  |
| `%u`      | unsigned int   |
| `%e`      | scientific notation |
| `%%`      | literal `%`    |

**Escape Sequences**

| Sequence | Meaning        |
|----------|----------------|
| `\n`     | Newline        |
| `\t`     | Tab            |
| `\\`     | Backslash      |
| `\"`     | Double quote   |
| `\0`     | Null character |

```c
printf("%-10s %5d %8.2f\n", "Item", 42, 3.14);
// left-align str(10), right-align int(5), float with 2 decimal(8)
```

### Input — `scanf`

```c
int age;
scanf("%d", &age);       // & = address of — where to store value
```

> The `&` (address-of operator) is required because `scanf` needs to write into the variable's memory location — this is **call by reference**.

```c
char name[50];
scanf("%s", name);        // reads one word (stops at space)
fgets(name, 50, stdin);   // reads full line — safer, use this
```

### Standard Streams

| Stream   | Default target | Usage                      |
|----------|----------------|----------------------------|
| `stdin`  | Keyboard       | `scanf`, `fgets`           |
| `stdout` | Screen         | `printf`, `puts`           |
| `stderr` | Screen (errors)| `fprintf(stderr, ...)` — not redirected with `>` |

```c
fprintf(stderr, "Error: file not found\n");  // goes to error stream
```

### Full I/O Example

```c
#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // safer than scanf for strings

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}
```

**Watch:**
- [C printf and scanf — Bro Code](https://www.youtube.com/watch?v=PIIiRgFyO4I)
- [fgets vs scanf — Jacob Sorber](https://www.youtube.com/watch?v=h6QlD1vws2Y)

---

## 10 · Control Flow

### `if`

```c
if (condition) {
    // executes if condition != 0 (true)
}
```

### `if...else`

```c
if (n > 0) {
    printf("Positive\n");
} else {
    printf("Non-positive\n");
}
```

### `if...else if...else`

```c
if (score >= 90)       puts("A");
else if (score >= 80)  puts("B");
else if (score >= 70)  puts("C");
else                   puts("F");
```

### `switch`

```c
switch (expression) {
    case 1:
        printf("One\n");
        break;        // without break, falls through to next case
    case 2:
        printf("Two\n");
        break;
    default:
        printf("Other\n");
}
```

> **Fall-through** is a feature (and common bug) — omitting `break` intentionally continues to the next case.

```c
// Intentional fall-through example
switch (ch) {
    case 'a': case 'e': case 'i': case 'o': case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
}
```

**Watch:**
- [C if/else — Neso Academy](https://www.youtube.com/watch?v=IADAmLkrxoE)
- [C switch Statement — Bro Code](https://www.youtube.com/watch?v=GWbB8yJAbT0)

---

## 11 · Loops

### `for` — known iteration count

```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```

```
init  →  test  →  body  →  update  →  test  →  body  →  ...  →  test fails  →  exit
```

### `while` — condition-driven

```c
int i = 1;
while (i <= 5) {
    printf("%d\n", i);
    i++;
}
```

### `do...while` — body executes at least once

```c
int i = 1;
do {
    printf("%d\n", i);
    i++;
} while (i <= 5);
```

### `break` & `continue`

```c
// break — exits loop immediately
for (int i = 0; i < 10; i++) {
    if (i == 5) break;
    printf("%d ", i);   // 0 1 2 3 4
}

// continue — skips current iteration
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) continue;
    printf("%d ", i);   // 1 3 5 7 9
}
```

### `goto` — unconditional jump (use sparingly)

```c
int i = 0;
loop:
    if (i < 5) {
        printf("%d\n", i++);
        goto loop;
    }

// Common legitimate use: error cleanup
FILE *f = fopen("data.txt", "r");
if (!f) goto cleanup;
// ... work with file ...
cleanup:
    fclose(f);
```

**Watch:**
- [C Loops — Bro Code](https://www.youtube.com/watch?v=TsF-8HnHdPQ)
- [C for Loop Deep Dive — Caleb Curry](https://www.youtube.com/watch?v=d_SSnrfPHMw)

---

## 12 · Functions

### Anatomy

```c
returnType functionName(paramType param1, paramType param2) {
    // body
    return value;    // omit if returnType is void
}
```

### Declaration, Definition, Call

```c
// Declaration (prototype) — tells compiler the signature
int add(int a, int b);

// Definition — actual implementation
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);  // call
    printf("%d\n", result);    // 30
    return 0;
}
```

### Function Types

```c
void greet(void)        { printf("Hello\n"); }           // no args, no return
int  square(int n)      { return n * n; }                // args + return
void printSum(int a, int b) { printf("%d\n", a + b); }  // args, no return
int  getInput(void)     { int x; scanf("%d",&x); return x; } // no args, return
```

### Call by Value vs Call by Reference

```c
// Call by Value — copy is passed, original unchanged
void doubleVal(int x) { x *= 2; }
int n = 5;
doubleVal(n);
printf("%d\n", n);   // still 5

// Call by Reference — address is passed, original can be changed
void doubleRef(int *x) { *x *= 2; }
doubleRef(&n);
printf("%d\n", n);   // 10
```

### Recursion

A function calling itself to solve a problem via self-similar sub-problems.

```c
// Base case is mandatory — prevents infinite recursion
int factorial(int n) {
    if (n == 0) return 1;           // base case
    return n * factorial(n - 1);   // recursive call
}
// factorial(5) → 5 × 4 × 3 × 2 × 1 = 120
```

```
factorial(4)
  └─ 4 × factorial(3)
          └─ 3 × factorial(2)
                   └─ 2 × factorial(1)
                            └─ 1 × factorial(0) → 1
```

**Fibonacci (classic recursive)**

```c
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

> Naive recursive Fibonacci is O(2ⁿ). Use dynamic programming or iteration for performance.

**Watch:**
- [C Functions — Neso Academy](https://www.youtube.com/watch?v=qT0HbNz0St0)
- [C Recursion Explained — Caleb Curry](https://www.youtube.com/watch?v=kepBmgvWNin)

---

## 13 · Arrays & Strings

### 1D Array

```c
int scores[5] = {95, 87, 73, 61, 45};

//  Index:  [0]  [1]  [2]  [3]  [4]
//  Value:   95   87   73   61   45

printf("%d\n", scores[2]);        // 73
printf("%zu\n", sizeof(scores));  // 20 bytes (5 × 4)
```

### Iterating Arrays

```c
int n = 5;
int arr[] = {10, 20, 30, 40, 50};

for (int i = 0; i < n; i++) {
    printf("arr[%d] = %d\n", i, arr[i]);
}
```

### 2D Array (Matrix)

```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

printf("%d\n", matrix[1][2]);  // 6

// Print full matrix
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%3d ", matrix[i][j]);
    }
    printf("\n");
}
```

### Strings in C

Strings are **null-terminated character arrays** (`\0` marks the end).

```c
char name[] = "Alice";
// Stored as: ['A','l','i','c','e','\0']
//  Index:      0   1   2   3   4   5
```

**Common String Functions** (`<string.h>`)

| Function              | Description                              |
|-----------------------|------------------------------------------|
| `strlen(s)`           | Length (excludes `\0`)                   |
| `strcpy(dest, src)`   | Copy src into dest                       |
| `strncpy(d, s, n)`    | Copy at most n chars — safer             |
| `strcmp(a, b)`        | Compare: 0 = equal, <0 = a<b, >0 = a>b |
| `strcat(dest, src)`   | Append src to dest                       |
| `strchr(s, ch)`       | Find first occurrence of ch in s        |
| `strstr(s, sub)`      | Find substring in string                 |
| `sprintf(buf, fmt, ...)`| Format into string buffer             |

```c
#include <string.h>

char s1[50] = "Hello";
char s2[]   = "World";

printf("Length: %zu\n", strlen(s1));     // 5
strcat(s1, " ");
strcat(s1, s2);
printf("%s\n", s1);                      // Hello World
printf("Equal: %d\n", strcmp(s1, s2));  // non-zero (not equal)
```

**Watch:**
- [C Arrays — Bro Code](https://www.youtube.com/watch?v=Iu3-I4c1Q-4)
- [C Strings — Neso Academy](https://www.youtube.com/watch?v=Bf8a6IC1dE8)

---

## 14 · Pointers

Pointers are variables that store **memory addresses**.  
This is the most powerful — and most dangerous — feature of C.

```c
int  x   = 42;        // variable
int *ptr = &x;        // pointer — stores address of x

printf("%d\n",  x);   // 42   — value of x
printf("%p\n", ptr);  // address of x (e.g. 0x7ffd...)
printf("%d\n", *ptr); // 42   — dereference: value at that address
```

```
Memory:
  Address  │  Value
  0x1000   │  42      ← x lives here
  0x1008   │  0x1000  ← ptr stores x's address
```

### Pointer Arithmetic

```c
int arr[] = {10, 20, 30, 40};
int *p = arr;              // points to arr[0]

printf("%d\n", *p);        // 10
printf("%d\n", *(p+1));    // 20  — moves 4 bytes (sizeof int)
printf("%d\n", *(p+2));    // 30

p++;                       // now points to arr[1]
```

### Pointers & Functions

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int x = 5, y = 10;
swap(&x, &y);
printf("%d %d\n", x, y);  // 10 5
```

### Pointer to Pointer

```c
int  val  = 100;
int *ptr  = &val;
int **dbl = &ptr;         // pointer to pointer

printf("%d\n", **dbl);    // 100
```

### `NULL` Pointer

```c
int *ptr = NULL;          // safe initialization

if (ptr == NULL) {
    printf("Pointer is not pointing anywhere\n");
}
// Always check for NULL before dereferencing
```

### Common Pointer Mistakes

```
Dangling pointer  — using pointer after freeing memory
Wild pointer      — uninitialized pointer pointing to random address
Null dereference  — dereferencing NULL (segfault)
Buffer overflow   — writing past array bounds
```

**Watch:**
- [Pointers in C — Low Level Learning](https://www.youtube.com/watch?v=2ybLD6_2gKM)
- [Pointer Arithmetic — Caleb Curry](https://www.youtube.com/watch?v=Rxvv9krECNw)

---

## 15 · Structures, Unions & Enums

### `struct`

Groups variables of different types under one name.

```c
struct Student {
    char  name[50];
    int   age;
    float gpa;
};

struct Student s1 = {"Alice", 20, 3.8f};
printf("%s — GPA: %.1f\n", s1.name, s1.gpa);
```

**Struct Pointer Access**

```c
struct Student *ptr = &s1;
printf("%s\n", ptr->name);   // arrow operator for pointer access
printf("%s\n", (*ptr).name); // equivalent, but -> is preferred
```

**Array of Structs**

```c
struct Student class[30];
class[0].age = 19;
```

### `typedef`

```c
typedef struct {
    char  name[50];
    int   age;
    float gpa;
} Student;

Student s1 = {"Bob", 21, 3.5f};  // no 'struct' keyword needed
```

### `union`

All members share the **same memory location** — size = size of largest member.

```c
union Data {
    int   i;
    float f;
    char  str[20];
};

union Data d;
d.i = 42;
printf("%d\n", d.i);    // 42

d.f = 3.14f;            // overwrites i
printf("%.2f\n", d.f);  // 3.14
// d.i is now undefined — memory is shared
```

### `enum`

Named integer constants.

```c
enum Day { MON=1, TUE, WED, THU, FRI, SAT, SUN };
// TUE=2, WED=3, ... automatically

enum Day today = WED;

if (today == WED) printf("Midweek\n");
```

**Watch:**
- [C Structs — Bro Code](https://www.youtube.com/watch?v=0BKlgThKN0E)
- [C Unions & Enums — Neso Academy](https://www.youtube.com/watch?v=HNmFkBGMBk4)

---

## 16 · Memory Management

### Stack vs Heap

```
Stack                          Heap
─────────────────────          ─────────────────────
Automatic (compiler managed)   Manual (you manage it)
Fixed size                     Grows as needed
Fast                           Slightly slower
Local variables live here      malloc/calloc live here
Freed on function return       Freed only with free()
```

### Dynamic Allocation (`<stdlib.h>`)

```c
// malloc — allocate uninitialized memory
int *arr = malloc(5 * sizeof(int));

// calloc — allocate + zero-initialize
int *arr = calloc(5, sizeof(int));

// realloc — resize existing allocation
arr = realloc(arr, 10 * sizeof(int));

// free — release memory (always!)
free(arr);
arr = NULL;   // prevent dangling pointer
```

### Pattern: Allocate → Use → Free

```c
#include <stdlib.h>

int n = 10;
int *data = malloc(n * sizeof(int));

if (data == NULL) {          // always check malloc return
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
}

for (int i = 0; i < n; i++) {
    data[i] = i * i;
}

// ... use data ...

free(data);
data = NULL;
```

### Storage Classes

| Class      | Keyword    | Scope       | Lifetime         | Default value |
|------------|------------|-------------|------------------|---------------|
| Automatic  | `auto`     | Local       | Function call    | Garbage       |
| Register   | `register` | Local       | Function call    | Garbage       |
| Static     | `static`   | Local/global| Entire program   | `0`           |
| External   | `extern`   | Global      | Entire program   | `0`           |

```c
void counter() {
    static int count = 0;  // initialized once, persists between calls
    count++;
    printf("%d\n", count);
}
// call 3 times → prints 1, 2, 3
```

**Watch:**
- [Dynamic Memory in C — Low Level Learning](https://www.youtube.com/watch?v=_8-ht2AKyH4)
- [Stack vs Heap — Computerphile](https://www.youtube.com/watch?v=_8-ht2AKyH4)

---

## 17 · File Handling

### File Operations Flow

```
fopen()  →  read/write (fscanf / fprintf / fgets / fputs)  →  fclose()
```

### Opening Modes

| Mode  | Meaning                                     |
|-------|---------------------------------------------|
| `"r"` | Read — file must exist                      |
| `"w"` | Write — creates file, truncates if exists   |
| `"a"` | Append — creates file, preserves content    |
| `"r+"`| Read + Write — file must exist             |
| `"b"` | Binary mode (append to any: `"rb"`, `"wb"`) |

### Complete Example

```c
#include <stdio.h>

int main() {
    // Write to file
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "Cannot open file\n");
        return 1;
    }
    fprintf(fp, "Line 1\n");
    fprintf(fp, "Score: %d\n", 95);
    fclose(fp);

    // Read from file
    char buffer[256];
    fp = fopen("data.txt", "r");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}
```

### File Functions Reference

| Function                | Description                     |
|-------------------------|---------------------------------|
| `fopen(path, mode)`     | Open file, returns `FILE*`      |
| `fclose(fp)`            | Close file                      |
| `fprintf(fp, fmt, ...)` | Write formatted to file         |
| `fscanf(fp, fmt, ...)`  | Read formatted from file        |
| `fgets(buf, n, fp)`     | Read line from file             |
| `fputs(str, fp)`        | Write string to file            |
| `feof(fp)`              | Returns true at end of file     |
| `rewind(fp)`            | Reset position to start of file |
| `fseek(fp, offset, pos)`| Move file position              |
| `ftell(fp)`             | Get current file position       |

**Watch:**
- [C File Handling — Neso Academy](https://www.youtube.com/watch?v=qdtHTY_zStA)

---

## 18 · Preprocessor Macros

### `#define` — Constants

```c
#define PI        3.14159265
#define MAX_SIZE  100
#define APP_NAME  "MyProgram"

// No semicolon — it's a text substitution, not a statement
```

### Function-like Macros

```c
#define SQUARE(x)    ((x) * (x))
#define MAX(a, b)    ((a) > (b) ? (a) : (b))
#define ABS(x)       ((x) < 0 ? -(x) : (x))

// Always parenthesize arguments — avoids operator precedence bugs
// SQUARE(2+3) → ((2+3)*(2+3)) = 25  ✓
// Without parens: SQUARE(2+3) → 2+3*2+3 = 11  ✗
```

### Conditional Compilation

```c
#define DEBUG 1

#ifdef DEBUG
    printf("Debug: x = %d\n", x);  // compiled only if DEBUG is defined
#endif

#ifndef MAX_SIZE
    #define MAX_SIZE 256
#endif
```

### `#undef`

```c
#define TEMP 100
// ... use TEMP ...
#undef TEMP
// TEMP no longer defined
```

### Predefined Macros

| Macro        | Value                          |
|--------------|--------------------------------|
| `__FILE__`   | Current filename               |
| `__LINE__`   | Current line number            |
| `__DATE__`   | Compilation date               |
| `__TIME__`   | Compilation time               |
| `__func__`   | Current function name (C99)    |

```c
printf("Error at %s line %d in %s()\n", __FILE__, __LINE__, __func__);
```

**Watch:**
- [C Macros — Jacob Sorber](https://www.youtube.com/watch?v=GW7ZO8bflJM)

---

## 19 · Error Handling & Debugging

### Types of Errors

| Error Type    | When detected   | Example                          |
|---------------|-----------------|----------------------------------|
| Syntax error  | Compile time    | Missing `;`, mismatched `{}`     |
| Linker error  | Link time       | Calling undefined function       |
| Runtime error | Execution       | Divide by zero, segfault         |
| Logical error | Testing/review  | Wrong algorithm, off-by-one      |

### `errno` & `perror`

```c
#include <errno.h>
#include <string.h>

FILE *fp = fopen("missing.txt", "r");
if (fp == NULL) {
    perror("fopen");  // prints: fopen: No such file or directory
    // or:
    fprintf(stderr, "Error %d: %s\n", errno, strerror(errno));
}
```

### Compiler Warnings

```bash
# Always compile with:
gcc -Wall -Wextra -Wpedantic -std=c11 -o prog prog.c

# -Wall        basic warnings
# -Wextra      additional warnings
# -Wpedantic   strict standard compliance
```

### GDB — GNU Debugger

```bash
gcc -g -o prog prog.c     # compile with debug symbols
gdb ./prog                 # launch debugger

# Inside GDB:
(gdb) break main          # set breakpoint at main
(gdb) run                 # start execution
(gdb) next                # step over
(gdb) step                # step into
(gdb) print x             # print variable value
(gdb) backtrace           # show call stack
(gdb) quit                # exit
```

### Valgrind — Memory Error Detector

```bash
valgrind --leak-check=full ./prog
# Detects: memory leaks, invalid reads/writes, use after free
```

**Watch:**
- [GDB Debugger Crash Course — Low Level Learning](https://www.youtube.com/watch?v=Dq8l1_-QgAc)
- [Valgrind Tutorial — Jacob Sorber](https://www.youtube.com/watch?v=bb1bTJtgXrI)

---

## 20 · Advanced C Concepts

### Command-Line Arguments

```c
int main(int argc, char *argv[]) {
    // argc = argument count (includes program name)
    // argv = argument vector (array of strings)

    printf("Program: %s\n", argv[0]);
    for (int i = 1; i < argc; i++) {
        printf("Arg %d: %s\n", i, argv[i]);
    }
    return 0;
}
// ./prog hello 42  → Program: ./prog, Arg 1: hello, Arg 2: 42
```

### Bit Manipulation

```c
unsigned int flags = 0;

// Set bit 3
flags |= (1 << 3);    // flags = 0b00001000

// Check bit 3
if (flags & (1 << 3)) printf("Bit 3 is set\n");

// Clear bit 3
flags &= ~(1 << 3);   // flags = 0b00000000

// Toggle bit 3
flags ^= (1 << 3);
```

### `const` & `volatile`

```c
const int MAX = 100;        // value cannot change after init
volatile int sensor = 0;    // value may change outside program control
                             // (hardware registers, signal handlers)
const volatile int hw_reg;  // read-only hardware register
```

### Inline Functions (C99)

```c
static inline int max(int a, int b) {
    return a > b ? a : b;
}
// Hint to compiler to expand inline (avoid function call overhead)
// Safer than function-like macros — type-checked
```

### Function Pointers

```c
int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int (*op)(int, int);   // pointer to function taking 2 ints, returning int

op = add;
printf("%d\n", op(3, 4));  // 7

op = mul;
printf("%d\n", op(3, 4));  // 12
```

**Watch:**
- [Bit Manipulation in C — Low Level Learning](https://www.youtube.com/watch?v=ZRNO-ewsNcQ)
- [Function Pointers — Jacob Sorber](https://www.youtube.com/watch?v=sxTFSDAZM8s)

---

## 21 · System-Level Concepts

### Compilation Stages (Detailed)

```bash
gcc -E hello.c -o hello.i   # [1] Preprocessing: macros, includes
gcc -S hello.i -o hello.s   # [2] Compilation: C → Assembly
gcc -c hello.s -o hello.o   # [3] Assembly: → object file (binary)
gcc hello.o -o hello         # [4] Linking: resolve external symbols
```

### Static vs Dynamic Linking

| Property     | Static                      | Dynamic                      |
|--------------|-----------------------------|------------------------------|
| Library code | Copied into executable      | Loaded at runtime from `.so`/`.dll` |
| Binary size  | Larger                      | Smaller                      |
| Dependencies | Self-contained              | Requires library installed   |
| Link flag    | `gcc -static`               | Default behavior             |

```bash
gcc -o static_prog prog.c -static      # static
gcc -o shared_prog prog.c -lm          # dynamic link math library
```

### Custom Header Files

```
project/
  ├─ main.c
  ├─ utils.c
  └─ utils.h
```

```c
// utils.h
#ifndef UTILS_H
#define UTILS_H

void printLine(const char *msg);
int  clamp(int val, int min, int max);

#endif
```

```bash
gcc main.c utils.c -o program
```

### Coding Standards

```c
// Naming conventions
int    user_age;          // snake_case for variables
#define MAX_BUFFER 1024   // UPPER_CASE for macros
void   calculateScore();  // camelCase or snake_case for functions

// Good practices
// ✓ Always initialize variables
// ✓ Check return values of malloc, fopen, scanf
// ✓ Use const where value should not change
// ✓ Free every malloc
// ✓ Compile with -Wall -Wextra
// ✓ Use include guards in every header
```

**Watch:**
- [Makefiles — CS50](https://www.youtube.com/watch?v=do7bVP8sBtE)
- [Static vs Shared Libraries — Jacob Sorber](https://www.youtube.com/watch?v=JbHmin2Wtmc)

---

## 22 · C vs Python — Quick Reference

```
Feature               C                          Python
─────────────────────────────────────────────────────────
Paradigm              Procedural                 Multi-paradigm (OOP, functional)
Year                  1972                       1991
Typing                Static, strong             Dynamic, strong
Memory                Manual (malloc/free)       Automatic (GC)
Speed                 Very fast (native code)    Slower (interpreted)
Syntax                Semicolons, braces         Indentation-based
Boolean result        1 or 0                     True or False
Integer division      5/2 = 2                    5/2 = 2.5 (use 5//2 for 2)
Strings               Null-terminated char[]     Immutable str object
I/O                   printf / scanf             print / input
Error handling        Return codes, errno        Exceptions (try/except)
Compilation           gcc → native binary        Interpreted (CPython in C)
Platform              Compile per target          Write once, run anywhere
Primary use           OS, drivers, embedded       Web, data science, scripting
```

---

## 23 · Practice Projects

### Beginner

| Project              | Concepts covered                               |
|----------------------|------------------------------------------------|
| Calculator           | functions, switch, arithmetic operators        |
| Number guessing game | loops, rand(), conditionals                    |
| Pattern printing     | nested loops                                   |
| Fibonacci sequence   | loops & recursion                              |
| Simple interest calc | variables, arithmetic, printf/scanf            |

### Intermediate

| Project                  | Concepts covered                           |
|--------------------------|--------------------------------------------|
| Student record system    | structs, arrays, file I/O                 |
| Bank management system   | structs, functions, switch                |
| File-based CRUD program  | file handling, structs, search            |
| Linked list              | pointers, dynamic memory, struct          |
| Stack & queue            | pointers, arrays, abstract data types     |

### Advanced

| Project                  | Concepts covered                           |
|--------------------------|--------------------------------------------|
| Mini shell               | fork/exec, processes, string parsing      |
| Memory allocator         | pointers, bit manipulation, sbrk          |
| Compiler front-end       | lexer, parser, AST, recursion             |
| HTTP server              | sockets, file I/O, string processing      |
| Embedded C project       | registers, interrupts, volatile, bitwise  |

**Watch:**
- [C Projects for Beginners — Caleb Curry](https://www.youtube.com/watch?v=87SH2Cn0s9A)
- [Build a Shell in C — CodeVault](https://www.youtube.com/watch?v=z4LEuxMGGs8)

---

## 24 · Reference — The Book

> *The C Programming Language*, 2nd Edition  
> Brian W. Kernighan & Dennis M. Ritchie — 1988  
> Published: Prentice Hall · ISBN: 0-13-110362-8

The **K&R book** is the definitive reference for C. Every professional C programmer has read it.  
It was written by the people who invented the language — concise, precise, and still relevant.

**Additional References**

| Resource                           | Link / Note                                          |
|------------------------------------|------------------------------------------------------|
| C Reference Manual                 | https://en.cppreference.com/w/c                      |
| CS50 — Harvard (free course)       | https://www.youtube.com/c/cs50                       |
| C Programming — freeCodeCamp       | https://www.youtube.com/watch?v=KJgsSFOSQv0          |
| Neso Academy — C playlist          | https://www.youtube.com/playlist?list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR |
| Bro Code — C Full Course           | https://www.youtube.com/watch?v=87SH2Cn0s9A          |
| Low Level Learning (YouTube)       | https://www.youtube.com/@LowLevelLearning            |
| Jacob Sorber (YouTube)             | https://www.youtube.com/@JacobSorber                 |
| Caleb Curry — C Tutorial           | https://www.youtube.com/playlist?list=PL_c9BZzLwBRKKqOc9TJz1pP0ASrxLMtp2 |
| GNU C Library docs                 | https://www.gnu.org/software/libc/manual/            |

---

```
C · PROGRAMMING  ·  github.com/Ayushburman
"Closer to the metal. Closer to the truth."
```
