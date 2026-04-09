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

#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 3, b = 4;
    swap(&a, &b);
    printf("%d %d", a, b);
}

#include <stdio.h>
int* fun() {
    static int x = 10;
    return &x;
}
int main() {
    int *p = fun();
    printf("%d", *p);
}

#include <stdio.h>
int main() {
    int arr[3] = {1, 2, 3};
    int (*p)[3] = &arr;
    printf("%d", (*p)[1]);
}

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 50;
    printf("%d", *p);
    free(p);
}

#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}
#include <stdio.h>
int main() {
    char *str = "Hello";
    printf("%c", *(str + 1));
}

#include <stdio.h>
int main() {
    int a = 10;
    void *p = &a;
    printf("%d", *(int*)p);
}

#include <stdio.h>
int main() {
    int a = 10;
    void *p = &a;
    printf("%d", *(int*)p);
}

#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*f)(int, int) = add;
    printf("%d", f(2, 3));
}

#include <stdio.h>
struct A {
    int x;
};
int main() {
    struct A a = {10};
    struct A *p = &a;
    printf("%d", p->x);
}
