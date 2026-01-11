# C Programming  - THE MOTHER
## Developed in 1972 by Dennis Ritchie @ BELL LABS
## How the machine breathes
- # The Problem
 - Computers were HUGE / EXPENSIVE / PROGRAMMED in Assembly language
 - we wanted SPEED / READABILTIY / PORTABILITY
 - BELL LABS was buulding new system called UNIX at that time but it was SLOW / HEAVY & HARD / PORTABILITY ISSUES
# So we needed language that talks to hardware but still thinks likenHUMANS


# EVOLUTION of C
MAchine Cde -> BCPL -> B -> C


## UNIX / LINUS kernel / Window Core / Embedded Sysytems / Compilers Database / drivers --- rewritten fully in C 

We're going to talk about the origins of the C programming language. Language was invented by Dennis Ritchie. Dennis Ritchie invented it 1972. Its purpose was to write an operating system. The operating system became so famous that we're still using it, it's called Unix, and while it was research which he conducted with Ken Thompson, because it was done at Bell Labs at that time, it was released as a free product. So people who wanted to use and effective at the time, small timesharing system or a system that let you have multi-user is on a small computer had many advantages, and it was just the era of the minicomputer was just starting. So people had very large computers like millions of dollars of big hardware from IBM or Burroughs. 
This wasn't how they were going to use their computer typically. Instead, this was for computers just being developed by places like Hewlett-Packard and then Digital Equipment. Later, the system becomes very important because [inaudible] used on small personal computers, and indeed it's the basis of Linux and is the under the hood mechanism behind the Macintosh Operating System. Very important. In fact so important are both Ritchie and Thomson won the highest award in computer science, which is called the Turing Award. 


<img width="385" height="217" alt="image" src="https://github.com/user-attachments/assets/3cbd8005-403a-4f71-b997-c21a7186efb4" />


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

# C Syllabus 

## 1️⃣ Foundations (Must Start Here)
> 1. What is C?

>> History of C

>> Why C is called a mother language

>> Where C is used (OS, embedded systems, compilers)

2. C Program Structure

#include

main() function

Statements & blocks

Compilation process (source → object → executable)

3. Basic Syntax


Keywords

Identifiers

Constants

Variables

Data types

## 2️⃣ Data Types & Variables
4. Data Types

int

float

double

char

void

5. Type Modifiers

short, long

signed, unsigned

6. Variables

Declaration

Initialization

Scope (local, global)

Lifetime

## 3️⃣ Operators & Expressions
7. Operators

Arithmetic (+ - * / %)

Relational (< > <= >= == !=)

Logical (&& || !)

Assignment (= += -=)

Increment / Decrement (++ --)

Bitwise (& | ^ ~ << >>)

Conditional (?:)

sizeof

8. Expressions & Precedence

Operator precedence

Associativity

Type conversion (implicit & explicit)

## 4️⃣ Control Flow (Decision Making)
9. Conditional Statements

if

if-else

else-if

Nested if

switch-case

## 5️⃣ Loops (Iteration)
10. Looping Statements

for

while

do-while

11. Loop Control

break

continue

goto (use carefully)

## 6️⃣ Functions (Core Concept)
12. Functions

Function declaration

Function definition

Function call

13. Types of Functions

With arguments / without arguments

With return / without return

14. Parameter Passing

Call by value

Call by reference

15. Recursion

Recursive functions

Stack behavior

## 7️⃣ Arrays & Strings
16. Arrays

1D arrays

2D arrays

Multi-dimensional arrays

17. Strings

Character arrays

String handling functions:

strlen()

strcpy()

strcmp()

strcat()

## 8️⃣ Pointers (Most Important in C)
18. Basics of Pointers

What is a pointer?

Address (&) and dereference (*)

Pointer variables

19. Pointer Arithmetic

Increment / decrement

Pointer & arrays relation

20. Pointers with

Arrays


Strings

Functions

Structures

21. Double Pointers

Pointer to pointer

## 9️⃣ User-Defined Data Types
22. Structures (struct)

Defining structures

Accessing members

Structure arrays

Structure pointers

23. Unions (union)

Difference between struct & union

24. typedef

Creating custom type names

25. Enumerations (enum)

Named integer constants

## 🔟 Memory Management
26. Storage Classes

auto

register

static

extern

27. Dynamic Memory Allocation

malloc()

calloc()

realloc()

free()

## 1️⃣1️⃣ File Handling
28. File Operations

File pointers (FILE *)

Opening files:

fopen()

Reading:

fscanf()

fgets()

Writing:

fprintf()

fputs()

Closing:

fclose()

## 1️⃣2️⃣ Preprocessor & Macros
29. Preprocessor Directives

#include

#define

#undef

#ifdef

#ifndef

#endif

30. Macros

Function-like macros

Constants via macros

## 1️⃣3️⃣ Error Handling & Debugging
31. Errors in C

Syntax errors

Runtime errors

Logical errors

32. Debugging

Compiler warnings

Using debugger (gdb basics)

Common mistakes

## 1️⃣4️⃣ Advanced C Concepts
33. Command Line Arguments

argc

argv

34. Bit Manipulation

Bitwise operations

Flags & masks

35. Volatile & Const

const

volatile

36. Inline Functions
## 1️⃣5️⃣ System-Level & Practical Topics
37. Header Files

Creating custom header files

38. Compilation Process

Preprocessing

Compilation

Linking

39. Static vs Dynamic Linking
40. C Coding Standards

Good naming

Formatting

Best practices

## 1️⃣6️⃣ Practice & Projects (VERY IMPORTANT)
Beginner Projects

Calculator

Number guessing game

Pattern printing

Intermediate Projects

Student record system

Bank management system

File-based CRUD program

Advanced Projects

Mini shell

Compiler basics

Memory allocator

Embedded C projects

-----------------------------------------------------------------------------------------------------
some errors occured 

unable to resolve - [1/5/2026, 7:18:04 PM] Unable to resolve configuration with compilerPath: "C:/MinGW/bin/gcc.exe"

Try install MSYS2

GCC configuration



Day 4 couldnt make it 


c 

The mother language 


c prototype

gcc install

compiler fir c


----------------------------------------

Day 4 

l
l
l
l
l
l
l
l
l
-----------------------------------------
l
l
l
l
l
l
l
l
l
l
l
-----------------------------------------
l
l
l
l
l
l
l
l
l
l
l
l
l
-----------------------------------------
l
l
l
l
l
l
l
l
l
l
l
l
l
l
-----------------------------------------
                    ∆
                   o o
                    ^
                    _


________________________________________


day 5

-_______-______-______-

_________________________________________

            vvvvvvvvvvvvv
            \   0   0   /
             \    -    /
              \'_____'/
               _______



What is C Programming (in simple words)
C is a low-level, procedural programming language that lets you:
Talk very close to the hardware
Control memory manually
Write fast, efficient programs
That’s why C is used for:
Operating systems (Linux, Windows core parts)
Embedded systems (microcontrollers)
Compilers, interpreters
Device drivers



You write source code (.c)
Preprocessor handles #include, #define
Compiler converts code → machine instructions
Linker joins libraries
Executable runs on hardware
➡️ This is why C is fast and close to the system
C doesn’t “help you too much” like Python or Java — you must think carefully.
That’s why learning C builds strong programming logic.


Core Building Blocks (Everything depends on these)
1️⃣ Variables & Data Types
They tell:
What kind of data you store
How much memory is needed
Example:
Copy code
C
int age = 20;      // 4 bytes
char grade = 'A'; // 1 byte
C forces you to think about memory size, unlike Python.



2️⃣ Operators (How data is processed)
Operators are tools to manipulate data:
Math (+ - * /)
Logic (&& ||)
Comparison (< > ==)
Bitwise (used in hardware & OS)
C gives you bit-level control, which is powerful.


3️⃣ Control Flow (Decision making)
This is logic.
Example:
Copy code




4️⃣ Loops (Automation)
Loops repeat tasks.
Copy code
C
for(int i = 1; i <= 10; i++)
    printf("%d\n", i);
Loops are used everywhere:
Reading data
Processing arrays
Algorithms
if (marks >= 40)
    printf("Pass");
else
    printf("Fail");
Without control flow → programs would run line by line blindl


Functions (Program organization)
A function is a small machine inside your program.
Why needed?
Avoid repetition
Improve readability
Divide big problems into small ones
Copy code
C
int add(int a, int b) {
    return a + b;
}
In C, you must manage data flow manually → great for logic building.



🔹 Arrays & Strings (Bulk data)
Arrays
Store multiple values contiguously in memory.
Copy code
C
int marks[5] = {10,20,30,40,50};
C arrays:
Have fixed size
No bounds checking (dangerous but fast)
Strings
Strings are just char arrays ending with '\0'.
Copy code
C
char name[] = "Ayush";
➡️ This teaches how text is actually stored in memory

🔹 Pointers (Heart of C ❤️)
This is what separates C programmers from others.
A pointer:
Stores memory address
Lets you directly access RAM
Copy code
C
int x = 10;
int *p = &x;
Why pointers matter:
Dynamic memory
Efficient arrays
Functions modifying data
OS & drivers
If you understand pointers → C becomes easy



🔹 Memory Management (Manual control)
C gives you raw power:
Copy code
C
malloc()
calloc()
free()
You decide:
When memory is created
When it is destroyed
Mistake = crash
Correct use = extreme efficiency
This is why system programmers use C.



🔹 File Handling (Persistent data)
C can:
Read files
Write files
Modify stored data
Used in:
Logs
Databases
Config files




------------------
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}


------------------
#include <stdio.h>

int main() {
    printf("My name is Ayush");
    return 0;
}

------------------
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int sum;

    sum = a + b;

    printf("Sum = %d", sum);
    return 0;
}

------------------
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);
    return 0;
}

-------------------
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}
--------------------
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}