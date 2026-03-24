/*
 * 10 — Control Flow
 * ───────────────────────────────────────────────────────────────
 * Covers  : if / else-if / else, switch-case, goto (when & why
 *           not), nested conditions, fall-through
 * Compile : gcc control_flow.c -o control_flow
 * Run     : ./control_flow
 */
#include <stdio.h>
 
/* ── Helper: letter grade ───────────────────────────────── */
char grade(int marks) {
    if      (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 45) return 'D';
    else                  return 'F';
}

int main(void) {
 
    /* ── Basic if / else ─────────────────────────────────── */
    printf("=== if / else-if / else ===\n");
    int scores[] = {95, 82, 61, 44, 30};
    for (int i = 0; i < 5; i++) {
        printf("  marks=%3d  →  grade %c\n", scores[i], grade(scores[i]));
    }
   /* ── Nested if — FizzBuzz logic explained ───────────── */
    printf("\n=== nested if (FizzBuzz 1–20) ===\n");
    for (int n = 1; n <= 20; n++) {
        if      (n % 15 == 0) printf("FizzBuzz ");
        else if (n %  3 == 0) printf("Fizz ");
        else if (n %  5 == 0) printf("Buzz ");
        else                  printf("%d ", n);
    }
    printf("\n");


