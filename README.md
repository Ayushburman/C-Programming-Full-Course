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
--------------------
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("A is larger");
    else
        printf("B is larger");

    return 0;
}
-----------------------
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}
----------------------
#include <stdio.h>

int main() {
    printf("My name is Ayush");
    return 0;
}
----------------------
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d", sum);

    return 0;
}
----------------------
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
---------------------
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b)
        printf("%d is larger", a);
    else
        printf("%d is larger", b);

    return 0;
}
----------------------
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(op == '+')
        printf("Result = %d", a + b);
    else if(op == '-')
        printf("Result = %d", a - b);
    else if(op == '*')
        printf("Result = %d", a * b);
    else if(op == '/')
        printf("Result = %d", a / b);
    else
        printf("Invalid operator");

    return 0;
}
-----------------------------------
#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}



--------------------------------
#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}



--------------------------------
#include <stdio.h>

int main() {
    printf("My name is Ayush");
    return 0;
}

---------------------------------
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int sum = a + b;

    printf("Sum = %d", sum);
    return 0;
}


---------------------------------
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d", number);
    return 0;
}

--------------------------------
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}

-------------------------------
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);

    return 0;
}
-------------------------------
#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    return 0;
}




-------------------DataTypes-----------
#include <stdio.h>

/*
  This program explains and demonstrates
  basic data types in C:
  int, float, double, char, and void
*/

void showMessage();   // function with void return type

int main()
{
    /* -------- INT -------- */
    int age = 20;
    printf("int:\n");
    printf("Age = %d\n\n", age);

    /* -------- FLOAT -------- */
    float temperature = 36.5;
    printf("float:\n");
    printf("Temperature = %.2f\n\n", temperature);

    /* -------- DOUBLE -------- */
    double pi = 3.1415926535;
    printf("double:\n");
    printf("Value of Pi = %.10lf\n\n", pi);

    /* -------- CHAR -------- */
    char grade = 'A';
    printf("char:\n");
    printf("Grade = %c\n\n", grade);

    /* -------- VOID -------- */
    printf("void:\n");
    showMessage();   // calling void function

    return 0;
}

/* void function:
   - does not return any value
*/
void showMessage()
{
    printf("This is a void function. It returns no value.\n");
}

---------------TypeModifier--------------
#include <stdio.h>

/*
   This program demonstrates
   Type Modifiers in C:
   short, long, signed, unsigned
*/

int main()
{
    /* -------- SHORT -------- */
    short int smallNumber = 32000;
    printf("short int:\n");
    printf("Value = %d\n", smallNumber);
    printf("Size = %lu bytes\n\n", sizeof(smallNumber));

    /* -------- LONG -------- */
    long int bigNumber = 123456789;
    printf("long int:\n");
    printf("Value = %ld\n", bigNumber);
    printf("Size = %lu bytes\n\n", sizeof(bigNumber));

    /* -------- SIGNED -------- */
    signed int signedNumber = -50;
    printf("signed int:\n");
    printf("Value = %d\n", signedNumber);
    printf("Size = %lu bytes\n\n", sizeof(signedNumber));

    /* -------- UNSIGNED -------- */
    unsigned int unsignedNumber = 50;
    printf("unsigned int:\n");
    printf("Value = %u\n", unsignedNumber);
    printf("Size = %lu bytes\n\n", sizeof(unsignedNumber));

    return 0;
}

#include <stdio.h>

/* -------- GLOBAL VARIABLE -------- */
/* Declaration + Initialization */
int globalVar = 100;

/* Function to demonstrate local scope */
void showLocal()
{
    /* LOCAL VARIABLE */
    int localVar = 50;

    printf("Inside showLocal() function:\n");
    printf("Local Variable = %d\n", localVar);
    printf("Global Variable = %d\n\n", globalVar);
}

int main()
{
    /* -------- VARIABLE DECLARATION -------- */
    int a;      // declared but not initialized

    /* -------- VARIABLE INITIALIZATION -------- */
    a = 10;     // initialization after declaration

    /* Declaration + Initialization together */
    int b = 20;

    printf("Inside main() function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Global Variable = %d\n\n", globalVar);

    showLocal();   // function call

    return 0;
}
--------------Variables------------------
#include <stdio.h>

/* -------- GLOBAL VARIABLE -------- */
/* Declaration + Initialization */
int globalVar = 100;

/* Function to demonstrate local scope */
void showLocal()
{
    /* LOCAL VARIABLE */
    int localVar = 50;

    printf("Inside showLocal() function:\n");
    printf("Local Variable = %d\n", localVar);
    printf("Global Variable = %d\n\n", globalVar);
}

int main()
{
    /* -------- VARIABLE DECLARATION -------- */
    int a;      // declared but not initialized

    /* -------- VARIABLE INITIALIZATION -------- */
    a = 10;     // initialization after declaration

    /* Declaration + Initialization together */
    int b = 20;

    printf("Inside main() function:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Global Variable = %d\n\n", globalVar);

    showLocal();   // function call

    return 0;
}
----------------Operators----------------
#include <stdio.h>

int main()
{
    int a = 10, b = 3;

    /* -------- ARITHMETIC OPERATORS -------- */
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    /* -------- RELATIONAL OPERATORS -------- */
    printf("Relational Operators:\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n\n", a != b);

    /* -------- LOGICAL OPERATORS -------- */
    printf("Logical Operators:\n");
    printf("(a > 5 && b < 5) = %d\n", (a > 5 && b < 5));
    printf("(a > 5 || b > 5) = %d\n", (a > 5 || b > 5));
    printf("!(a > b) = %d\n\n", !(a > b));

    /* -------- ASSIGNMENT OPERATORS -------- */
    printf("Assignment Operators:\n");
    int x = 5;
    x += 2;
    printf("x += 2 -> %d\n", x);
    x -= 1;
    printf("x -= 1 -> %d\n\n", x);

    /* -------- INCREMENT / DECREMENT -------- */
    printf("Increment / Decrement:\n");
    int y = 10;
    printf("y++ = %d\n", y++);
    printf("After y++ -> %d\n", y);
    printf("--y = %d\n\n", --y);

    /* -------- BITWISE OPERATORS -------- */
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n\n", a >> 1);

    /* -------- CONDITIONAL OPERATOR -------- */
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Greater value = %d\n\n", max);

    /* -------- SIZEOF OPERATOR -------- */
    printf("sizeof Operator:\n");
    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of float = %lu bytes\n\n", sizeof(float));

    /* -------- EXPRESSIONS & PRECEDENCE -------- */
    printf("Expressions & Precedence:\n");
    int result = a + b * 2;
    printf("a + b * 2 = %d\n", result);

    return 0;
}

-------------------
#include <stdio.h>

int main()
{
    int num = 10;
    int marks = 75;
    int choice = 2;

    /* -------- IF STATEMENT -------- */
    printf("if statement:\n");
    if (num > 0)
    {
        printf("Number is positive\n\n");
    }

    /* -------- IF - ELSE STATEMENT -------- */
    printf("if-else statement:\n");
    if (num % 2 == 0)
    {
        printf("Number is even\n\n");
    }
    else
    {
        printf("Number is odd\n\n");
    }

    /* -------- ELSE-IF LADDER -------- */
    printf("else-if ladder:\n");
    if (marks >= 90)
    {
        printf("Grade: A\n\n");
    }
    else if (marks >= 75)
    {
        printf("Grade: B\n\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: C\n\n");
    }
    else
    {
        printf("Grade: Fail\n\n");
    }

    /* -------- NESTED IF -------- */
    printf("Nested if:\n");
    if (num > 0)
    {
        if (num < 100)
        {
            printf("Number is between 1 and 99\n\n");
        }
    }

    /* -------- SWITCH-CASE -------- */
    printf("switch-case statement:\n");
    switch (choice)
    {
        case 1:
            printf("You selected Option 1\n");
            break;

        case 2:
            printf("You selected Option 2\n");
            break;

        case 3:
            printf("You selected Option 3\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
-------------------------------------
#include <stdio.h>

int main()
{
    int number = 15;
    int marks = 82;
    int choice = 3;

    /* -------- IF STATEMENT -------- */
    printf("if statement:\n");
    if (number > 0)
    {
        printf("Number is positive\n\n");
    }

    /* -------- IF - ELSE STATEMENT -------- */
    printf("if-else statement:\n");
    if (number % 2 == 0)
    {
        printf("Number is even\n\n");
    }
    else
    {
        printf("Number is odd\n\n");
    }

    /* -------- ELSE-IF LADDER -------- */
    printf("else-if ladder:\n");
    if (marks >= 90)
    {
        printf("Grade: A\n\n");
    }
    else if (marks >= 75)
    {
        printf("Grade: B\n\n");
    }
    else if (marks >= 50)
    {
        printf("Grade: C\n\n");
    }
    else
    {
        printf("Grade: Fail\n\n");
    }

    /* -------- NESTED IF -------- */
    printf("Nested if:\n");
    if (number > 0)
    {
        if (number < 50)
        {
            printf("Number is between 1 and 49\n\n");
        }
    }

    /* -------- SWITCH-CASE -------- */
    printf("switch-case statement:\n");
    switch (choice)
    {
        case 1:
            printf("Option 1 selected\n");
            break;

        case 2:
            printf("Option 2 selected\n");
            break;

        case 3:
            printf("Option 3 selected\n");
            break;

        default:
            printf("Invalid option\n");
    }

    return 0; 
}



--------------------


A loop in C is used to repeat a block of code multiple times until a specified condition becomes false.
👉 Loops help avoid writing the same code again and again.


---------------------



Why Do We Need Loops?
To perform repetitive tasks
To reduce code length
To make programs efficient and readable



----------------------

printf("Hello\n");
printf("Hello\n");
printf("Hello\n");


---------------------

for(int i = 1; i <= 3; i++)
{
    printf("Hello\n");
}


---------------------


Types of Loops in C
1️⃣ for Loop
Used when the number of repetitions is known.
Syntax:
Copy code
C
for(initialization; condition; increment/decrement)
{
    statements;
}
Example:
Copy code
C
for(int i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
📌 Flow:
Initialization → Condition → Body → Update → Repeat

-------------------


do
{
    statements;
}
while(condition);


--------------------


int i = 1;
do
{
    printf("%d\n", i);
    i++;
}
while(i <= 5);

--------------------


Loop Control Statements
🔹 break
Terminates the loop immediately
🔹 continue
Skips the current iteration and moves to the next


-----------------

#include <stdio.h>

int main() {
    printf("Hello, World!");
    return 0;
}

------------------

#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d", sum);

    return 0;
}

-------------------


#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}

--------------------
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");

    return 0;
}

------------------------------
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is greater", a);
    else
        printf("%d is greater", b);

    return 0;
}
----------------------------

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    return 0;
}

----------------------------

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);

    return 0;
}
----------------Functions-------------
return_type function_name(parameters);


---------------------
int add(int, int);


-----------------

return_type function_name(parameters)
{
    // code
}

-------------
function_name(arguments);


-------------
#include <stdio.h>

// Function Declaration
int add(int, int);

int main()
{
    int result;
    result = add(10, 20);   // Function Call
    printf("Sum = %d", result);
    return 0;
}

// Function Definition
int add(int a, int b)
{
    return a + b;
}

----------------------

#include <stdio.h>

int multiply(int a, int b);

int main()
{
    int result = multiply(4, 5);
    printf("Result = %d", result);
    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}



-------------------

#include <stdio.h>

void sum(int a, int b);

int main()
{
    sum(10, 20);
    return 0;
}

void sum(int a, int b)
{
    printf("Sum = %d", a + b);
}

----------------

#include <stdio.h>

int square();

int main()
{
    int result = square();
    printf("Square = %d", result);
    return 0;
}

int square()
{
    int x = 5;
    return x * x;
}

--------------
#include <stdio.h>

int square();

int main()
{
    int result = square();
    printf("Square = %d", result);
    return 0;
}

int square()
{
    int x = 5;
    return x * x;
}


------------
#include <stdio.h>

void greet();

int main()
{
    greet();
    return 0;
}

void greet()
{
    printf("Hello, Welcome to C Programming!");
}

-----------


#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
-----------

#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;
    float avg;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}


-------------

#include <stdio.h>

int main() {
    int arr[5], i, max;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1; i < 5; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest element = %d\n", max);

    return 0;
}
----------------


#include <stdio.h>

int main() {
    int mat[2][2], i, j;

    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}


--------------------

#include <stdio.h>

int main() {
    int mat[2][2], i, j;

    printf("Enter elements of 2x2 matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

---------


#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s!\n", name);

    return 0;
}
---------------------


#include <stdio.h>

void display(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements are:\n");
    display(arr, 5);

    return 0;
}


--------------------
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("Linked List: ");
    temp = head;
    while(temp != NULL) {
        printf("%d -> ",
-----------------------------------
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    printf("Node inserted at beginning: %d", head->data);

    return 0;
}

------------------------
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode, *temp;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }

    printf("Node inserted at end");

    return 0;
}
-----------------------
