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

/*
 * 03 — Reverse Array
 */
#include <stdio.h>

int main(void) {

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Reversed array:\n");

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
 * 04 — 2D Array (Matrix)
 */
#include <stdio.h>

int main(void) {

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matrix:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
 * 05 — String Length (Manual)
 */
#include <stdio.h>

int main(void) {

    char str[] = "hello";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("Length = %d\n", length);

    return 0;
}
