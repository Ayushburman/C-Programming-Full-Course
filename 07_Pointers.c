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
