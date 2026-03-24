/*
 * 09 — Input / Output
 * ───────────────────────────────────────────────────────────────
 * Covers  : printf format specifiers, scanf, getchar/putchar,
 *           gets (unsafe) vs fgets (safe), sscanf, sprintf,
 *           flush & newline behaviour
 * Compile : gcc input_output.c -o input_output
 * Run     : ./input_output
 */
#include <stdio.h>
#include <string.h>
 
int main(void) {

 /* ── printf format specifiers ───────────────────────── */
    printf("=== printf format specifiers ===\n");
    printf("  %%d  int         : %d\n",  -42);
    printf("  %%u  unsigned    : %u\n",  42u);
    printf("  %%f  float       : %f\n",  3.14f);
    printf("  %%e  scientific  : %e\n",  0.000123);
    printf("  %%g  shorter f/e : %g\n",  0.000123);
    printf("  %%c  char        : %c\n",  'Z');
    printf("  %%s  string      : %s\n",  "hello");
    printf("  %%p  pointer     : %p\n",  (void*)&main);
    printf("  %%x  hex         : %x\n",  255);
    printf("  %%o  octal       : %o\n",  8);
    printf("  %%%%  literal %%\n");


    /* Width and precision */
    printf("\n=== width & precision ===\n");
    printf("  [%10d]   right-aligned width 10\n",   42);
    printf("  [%-10d]   left-aligned  width 10\n",  42);
    printf("  [%010d]   zero-padded   width 10\n",  42);
    printf("  [%8.2f]   width 8, 2 decimal places\n", 3.14159);
    printf("  [%.5s]    truncate string to 5 chars: %.5s\n", "hello", "helloworld");
 
  /* ── getchar / putchar ──────────────────────────────── */
    printf("\n=== getchar / putchar demo ===\n");
    printf("  (skipped in demo — would block for terminal input)\n");
 
    /*
     * In a real terminal you'd do:
     *
     *   printf("Enter a char: ");
     *   fflush(stdout);          <- flush before blocking read
     *   int ch = getchar();
     *   printf("You typed: ");
     *   putchar(ch);
     *   putchar('\n');
     */
