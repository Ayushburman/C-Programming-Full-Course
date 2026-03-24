/*
 * 07 — Data Types & Variables
 * ───────────────────────────────────────────────────────────────
 * Covers  : int, float, double, char, _Bool, short, long, unsigned
 *           sizeof, type limits, implicit & explicit casting
 * Compile : gcc data_types.c -o data_types
 * Run     : ./data_types
 */

#include <stdio.h>
#include <limits.h>   /* INT_MAX, CHAR_MIN … */
#include <float.h>    /* FLT_MAX, DBL_MAX  … */
#include <stdbool.h>  /* bool, true, false   */

int main(void) {
 
    /* ── Integer family ─────────────────────────────────── */
    char   c  = 'A';
    short  s  = 32000;
    int    i  = -2147483648;   /* INT_MIN on 32-bit */
    long   l  = 9876543210L;
    long long ll = 9223372036854775807LL;  /* LLONG_MAX */
 
    unsigned int  ui = 4294967295U;   /* UINT_MAX */
    unsigned char uc = 255;

 /* ── Floating-point family ───────────────────────────── */
    float       f  = 3.14f;
    double      d  = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

 /* ── Boolean (C99+) ─────────────────────────────────── */
    bool flag = true;

