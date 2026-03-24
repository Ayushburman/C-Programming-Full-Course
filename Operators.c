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
