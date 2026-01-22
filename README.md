# C Programming  - THE MOTHER
## Developed in 1972 by Dennis Ritchie @ BELL LABS

## How the machine breathes
- # The Problem
 - Computers were HUGE / EXPENSIVE / PROGRAMMED in Assembly language
 - we wanted SPEED / READABILTIY / PORTABILITY


-------------------------------------

 - BELL LABS was buulding new system called UNIX at that time but it was SLOW / HEAVY & HARD / PORTABILITY ISSUES
# So we needed language that talks to hardware but still thinks likenHUMANS


# EVOLUTION of C
MAchine Cde -> BCPL -> B -> C


## UNIX / LINUS kernel / Window Core / Embedded Sysytems / Compilers Database / drivers --- rewritten fully in C 

We're going to talk about the origins of the C programming language. Language was invented by Dennis Ritchie. Dennis Ritchie invented it 1972. Its purpose was to write an operating system. The operating system became so famous that we're still using it, it's called Unix, and while it was research which he conducted with Ken Thompson, because it was done at Bell Labs at that time, it was released as a free product. So people who wanted to use and effective at the time, small timesharing system or a system that let you have multi-user is on a small computer had many advantages, and it was just the era of the minicomputer was just starting. So people had very large computers like millions of dollars of big hardware from IBM or Burroughs. 
This wasn't how they were going to use their computer typically. Instead, this was for computers just being developed by places like Hewlett-Packard and then Digital Equipment. Later, the system becomes very important because [inaudible] used on small personal computers, and indeed it's the basis of Linux and is the under the hood mechanism behind the Macintosh Operating System. Very important. In fact so important are both Ritchie and Thomson won the highest award in computer science, which is called the Turing Award. 


<img width="385" height="217" alt="image" src="https://github.com/user-attachments/assets/3cbd8005-403a-4f71-b997-c21a7186efb4" />

-----------------------------
## COMPILER
A compiler is a program that translates the entire source code at once from a high-level language into machine code (or object code).

Translation happens before execution

If there is an error → program will not run

Output: Executable file

### Languages using compiler

C

C++

Java (partially)

## What is an Interpreter?

An interpreter translates and executes line-by-line, at runtime.

No separate executable file

Stops immediately when an error occurs

Translation + execution happen together

## Languages using interpreter

Python

JavaScript

Ruby



<img width="572" height="239" alt="image" src="https://github.com/user-attachments/assets/b0bbb7bf-2865-4848-ad6a-ccf540bad545" />



--------------------------

# C Editor
## What is a C Editor?

## A C editor is a tool used to write and edit C code.

It does NOT execute code by itself.

# Examples

VS Code

Code::Blocks

Dev C++

Notepad++

<img width="639" height="432" alt="image" src="https://github.com/user-attachments/assets/191f61a4-fc56-4c48-b2a6-22472e532caf" />



<img width="631" height="189" alt="image" src="https://github.com/user-attachments/assets/9fd92a4f-12d8-4089-b065-f4d9f056c796" />




<img width="326" height="258" alt="image" src="https://github.com/user-attachments/assets/18cbf3be-b690-478e-9dfd-0d73e9fc42f2" />



intall C extension in VS CODE 
-----------------------------

# C Programming Syllabus

## 1. Foundations
- What is C
  - History of C
  - Why C is called a mother language
  - Uses of C (OS, embedded systems, compilers)
- Program structure
  - `#include`
  - `main()`
  - Statements and blocks
  - Compilation process

## 2. Data Types & Variables
- Data types
  - `int`, `float`, `double`, `char`, `void`
- Type modifiers
  - `short`, `long`
  - `signed`, `unsigned`
- Variables
  - Declaration
  - Initialization
  - Scope (local, global)
  - Lifetime

## 3. Operators & Expressions
- Operators
  - Arithmetic
  - Relational
  - Logical
  - Assignment
  - Increment / Decrement
  - Bitwise
  - Conditional (`?:`)
  - `sizeof`
- Expressions
  - Operator precedence
  - Associativity
  - Type conversion

## 4. Control Flow
- Conditional statements
  - `if`
  - `if-else`
  - `else-if`
  - Nested `if`
  - `switch-case`

## 5. Loops
- Looping statements
  - `for`
  - `while`
  - `do-while`
- Loop control
  - `break`
  - `continue`
  - `goto`

## 6. Functions
- Basics
  - Declaration
  - Definition
  - Function call
- Types of functions
  - With / without arguments
  - With / without return
- Parameter passing
  - Call by value
  - Call by reference
- Recursion
  - Recursive functions
  - Stack behavior

## 7. Arrays & Strings
- Arrays
  - 1D arrays
  - 2D arrays
  - Multi-dimensional arrays
- Strings
  - Character arrays
  - String functions
    - `strlen()`
    - `strcpy()`
    - `strcmp()`
    - `strcat()`

## 8. Pointers
- Pointer basics
  - Address (`&`)
  - Dereference (`*`)
- Pointer arithmetic
- Pointers with
  - Arrays
  - Strings
  - Functions
  - Structures
- Double pointers

## 9. User-Defined Data Types
- Structures (`struct`)
  - Structure arrays
  - Structure pointers
- Unions (`union`)
- `typedef`
- Enumerations (`enum`)

## 10. Memory Management
- Storage classes
  - `auto`
  - `register`
  - `static`
  - `extern`
- Dynamic memory allocation
  - `malloc()`
  - `calloc()`
  - `realloc()`
  - `free()`

## 11. File Handling
- File operations
  - File pointers (`FILE *`)
  - `fopen()`
  - `fscanf()`, `fgets()`
  - `fprintf()`, `fputs()`
  - `fclose()`

## 12. Preprocessor & Macros
- Preprocessor directives
  - `#include`
  - `#define`
  - `#undef`
  - `#ifdef`
  - `#ifndef`
  - `#endif`
- Macros
  - Function-like macros
  - Constants

## 13. Error Handling & Debugging
- Errors
  - Syntax errors
  - Runtime errors
  - Logical errors
- Debugging
  - Compiler warnings
  - GDB basics
  - Common mistakes

## 14. Advanced C Concepts
- Command line arguments
  - `argc`
  - `argv`
- Bit manipulation
  - Bitwise operations
  - Flags and masks
- `const` and `volatile`
- Inline functions

## 15. System-Level Concepts
- Header files
  - Custom header files
- Compilation stages
  - Preprocessing
  - Compilation
  - Linking
- Static vs dynamic linking
- Coding standards
  - Naming conventions
  - Formatting
  - Best practices

## 16. Practice & Projects
- Beginner projects
  - Calculator
  - Number guessing game
  - Pattern printing
- Intermediate projects
  - Student record system
  - Bank management system
  - File-based CRUD program
- Advanced projects
  - Mini shell
  - Compiler basics
  - Memory allocator
  - Embedded C projects
----------------------------------------------------------
----------------------------------------------------------
### C is a high-level, general-purpose programming language that was designed for system programming and performance-critical tasks.

>> It is:

> Fast ⚡

> Close to hardware 🖥️

> Portable (runs on many systems)

> Powerful 💪

> C lets you control memory, CPU, and hardware directly, which most modern languages hide.

> So in simple words:

> C is a language that talks closely to the computer’s brain (hardware).

----------------------------------------------------------------------------------------------------------------------------------------------
### ✅ History of C

### C was developed in 1972 by Dennis Ritchie at Bell Labs (USA).

> Timeline:

> 1️⃣ 1960s – ALGOL
→ Inspired many languages

> 2️⃣ 1967 – BCPL
→ System programming language

> 3️⃣ 1970 – B Language
→ Created by Ken Thompson

> 4️⃣ 1972 – C Language
→ Created by Dennis Ritchie (improved B)

> 5️⃣ 1973 – UNIX in C
→ UNIX OS rewritten in C (big breakthrough 🚀)

> This made C very popular worldwide.

>  Earlier, operating systems were written in Assembly (very hard).
C made OS development easier + portable.
---------------------------------------------------------------------------------------------------------------------------------------------------------

### ✅ Why C is Called the “Mother Language”?

### C is called Mother Language because many modern languages are based on C.

#### Examples:

> Language	Relation with C
> C++	Extension of C
> Java	C-like syntax
> C#	Inspired by C
> Python	Uses C internally
> JavaScript	C-style syntax
> PHP	Written in C
> Go	Inspired by C

> So:

> Most languages “learned from C” → like children from a mother 👩‍💻

Also:

> If you know C → learning other languages becomes easy

> You understand how computers really work

> That’s why teachers and engineers respect C a lot.
--------------------------------------------------------------------------------------------------------------------------------------------------

### ✅ Uses of C

### C is mainly used where speed, control, and reliability matter.

>> 🖥️ 1. Operating Systems (OS)

>> Most operating systems are written in C.

> Examples:

> Linux 🐧

> Windows (core parts)

> macOS

> UNIX

### Why C?
✔ Very fast
✔ Controls memory
✔ Talks directly to hardware

Without C → modern OS would not exist.

#### 🔌 2. Embedded Systems

>> Embedded systems = small computers inside machines.
> Examples: Washing machines,  Cars,  Microwaves,  Routers,  Medical devices,  Smart TVs

> These devices have: Low memory , Low power,  No heavy software

So they need lightweight + fast code → C is perfect.
--------------------------------------------------------------------------------------------------------------------------------

