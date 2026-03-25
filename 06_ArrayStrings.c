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

/*
 * 02 — Max & Min in Array
 */
#include <stdio.h>

int main(void) {

    int arr[] = {10, 25, 3, 89, 45};
    int size = 5;

    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max = %d\nMin = %d\n", max, min);

    return 0;
}
