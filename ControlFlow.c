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


/* ── switch-case ─────────────────────────────────────── */
    printf("\n=== switch-case (day of week) ===\n");
    for (int day = 1; day <= 7; day++) {
        printf("  day %d = ", day);
        switch (day) {
            case 1: printf("Monday\n");    break;
            case 2: printf("Tuesday\n");   break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n");  break;
            case 5: printf("Friday\n");    break;
            case 6:                        /* fall-through */
            case 7: printf("Weekend\n");   break;  /* both 6 and 7 reach here */
            default: printf("Unknown\n");
        }
    }

  /* ── switch fall-through demo ───────────────────────── */
    printf("\n=== fall-through demo ===\n");
    int level = 2;
    printf("  level=%d unlocks: ", level);
    switch (level) {          /* no break → intentional cascade */
        case 3: printf("feature-C  ");
        case 2: printf("feature-B  ");
        case 1: printf("feature-A  ");
        default: printf("(base)\n");
    }


   /* ── Conditional expression (ternary) ───────────────── */
    printf("\n=== ternary as concise if ===\n");
    int num = -7;
    const char *sign = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";
    printf("  %d is %s\n", num, sign);

  /* ── goto — cleanup pattern (one legitimate use) ─────── */
    printf("\n=== goto — the only widely-accepted use: cleanup ===\n");
    int error = 0;
 
