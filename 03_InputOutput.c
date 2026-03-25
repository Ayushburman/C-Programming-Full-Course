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
/* ── scanf demo with buffer (simulated via sscanf) ──── */
    printf("\n=== sscanf (safe demo without blocking stdin) ===\n");
    const char *input_line = "Ayush 21 3.85";
    char  name[32];
    int   age;
    float gpa;

    int matched = sscanf(input_line, "%31s %d %f", name, &age, &gpa);
    printf("  Parsed %d fields from \"%s\"\n", matched, input_line);
    printf("  name = %s\n",  name);
    printf("  age  = %d\n",  age);
    printf("  gpa  = %.2f\n", gpa);


 /* ── sprintf — build a string in memory ─────────────── */
    printf("\n=== sprintf ===\n");
    char buffer[64];
    sprintf(buffer, "Student: %s | Age: %d | GPA: %.2f", name, age, gpa);
    printf("  Result string: \"%s\"\n", buffer);


/* ── fgets — safe line input ─────────────────────────── */
    printf("\n=== fgets vs scanf ===\n");
    printf("  scanf(\"%%s\")   stops at whitespace — misses multi-word input\n");
    printf("  fgets(buf, n, stdin) reads full line including spaces\n");
    printf("  Always use fgets for strings. Never use gets() — no bounds check.\n");
 
 /* Simulate fgets parsing from a string buffer */
    const char *line = "Chandigarh University\n";
    char out[64];
    /* copy and strip trailing newline */
    strncpy(out, line, sizeof(out) - 1);
    out[strcspn(out, "\n")] = '\0';
    printf("  fgets line (newline stripped): \"%s\"\n", out);
 
    /* ── scanf pitfall: leftover newline ─────────────────── */
    printf("\n=== scanf pitfall reminder ===\n");
    printf("  After scanf(\"%%d\"), a '\\n' remains in the buffer.\n");
    printf("  Fix: scanf(\" %%c\", &ch)  — note the leading space.\n");
 
    return 0;
}
 
