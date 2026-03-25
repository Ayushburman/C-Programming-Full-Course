/*
 * 01 — Array Basics
 * ───────────────────────────────────────────────────────────────
 * Covers  : declaration, initialization, traversal, sum
 * Compile : gcc array_basics.c -o array_basics
 * Run     : ./array_basics
 */
int main(void) {

    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
