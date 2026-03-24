/*
 * 08 — Operators & Expressions
 * ───────────────────────────────────────────────────────────────
 * Covers  : arithmetic, relational, logical, bitwise,
 *           assignment, ternary, comma, sizeof, precedence
 * Compile : gcc operators.c -o operators
 * Run     : ./operators
 */

#include <stdio.h>
 
int main(void) {
 
    int a = 12, b = 5;

  /* ── Arithmetic ─────────────────────────────────────── */
    printf("=== Arithmetic ===\n");
    printf("  %d + %d = %d\n",  a, b, a + b);
    printf("  %d - %d = %d\n",  a, b, a - b);
    printf("  %d * %d = %d\n",  a, b, a * b);
    printf("  %d / %d = %d  (integer division)\n", a, b, a / b);
    printf("  %d %% %d = %d  (modulo)\n", a, b, a % b);


    /* prefix vs postfix */
    int x = 10;
    printf("\n  x=%d,  x++ = %d  (x becomes %d after)\n", x, x++, x);
    x = 10;
    printf("  x=%d, ++x  = %d  (x is already %d)\n",  x, ++x, x);
 

/* ── Relational ─────────────────────────────────────── */
    printf("\n=== Relational (1=true, 0=false) ===\n");
    printf("  %d == %d  →  %d\n", a, b, a == b);
    printf("  %d != %d  →  %d\n", a, b, a != b);
    printf("  %d >  %d  →  %d\n", a, b, a >  b);
    printf("  %d <  %d  →  %d\n", a, b, a <  b);
    printf("  %d >= %d  →  %d\n", a, b, a >= b);
    printf("  %d <= %d  →  %d\n", a, b, a <= b);

  /* ── Logical ────────────────────────────────────────── */
    printf("\n=== Logical ===\n");
    int p = 1, q = 0;
    printf("  %d && %d  →  %d\n", p, q, p && q);
    printf("  %d || %d  →  %d\n", p, q, p || q);
    printf("  !%d       →  %d\n", p,    !p);
    printf("  short-circuit: 0 && (1/0) never evaluates division → safe\n");

  /* ── Bitwise ────────────────────────────────────────── */
    printf("\n=== Bitwise (a=%d=0b%04d, b=%d=0b%04d) ===\n",
           a, 1100, b, 0101);           /* hand-written binary for display */
    printf("  a & b  = %d   (AND)\n",  a &  b);
    printf("  a | b  = %d  (OR)\n",   a |  b);
    printf("  a ^ b  = %d   (XOR)\n", a ^  b);
    printf("  ~a     = %d  (NOT, two's complement)\n", ~a);
    printf("  a << 1 = %d  (left  shift = a×2)\n",  a << 1);
    printf("  a >> 1 = %d   (right shift = a÷2)\n", a >> 1);
 
  /* ── Assignment shorthand ───────────────────────────── */
    printf("\n=== Assignment shorthand ===\n");
    int n = 20;
    printf("  n = 20\n");
    n += 5;  printf("  n += 5  → %d\n", n);
    n -= 3;  printf("  n -= 3  → %d\n", n);
    n *= 2;  printf("  n *= 2  → %d\n", n);
    n /= 4;  printf("  n /= 4  → %d\n", n);
    n %= 3;  printf("  n %%= 3  → %d\n", n);
    n <<= 1; printf("  n <<= 1 → %d\n", n);

/* ── Ternary ────────────────────────────────────────── */
    printf("\n=== Ternary (condition ? true : false) ===\n");
    int age = 20;
    const char *status = (age >= 18) ? "adult" : "minor";
    printf("  age=%d → \"%s\"\n", age, status);

 /* ── sizeof ─────────────────────────────────────────── */
    printf("\n=== sizeof ===\n");
    printf("  sizeof(int)    = %zu bytes\n", sizeof(int));
    printf("  sizeof(double) = %zu bytes\n", sizeof(double));
    int arr[10];
    printf("  int arr[10]: sizeof(arr)/sizeof(arr[0]) = %zu elements\n",
           sizeof(arr) / sizeof(arr[0]));
