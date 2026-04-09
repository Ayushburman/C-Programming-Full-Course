#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("%d", *p);
}

#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;
    printf("%p", p);
}

#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    *p = 20;
    printf("%d", a);
}

#include <stdio.h>
int main() {
    int a = 10, b = 20;
    int *p = &a;
    p++;
    printf("%d", *p);
}

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;
    printf("%d", *(p + 1));
}

#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3};
    int *p = arr;
    printf("%d", *(p + 1));
}

#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }
}

#include <stdio.h>
int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;
    printf("%d", **q);
}
