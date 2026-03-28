// 1
#include <stdio.h>

int main() {
    printf("Hello, I am Ayush!\n");
    return 0;
}
---------------------------------
// OUTPUT - Hello, I am Ayush!
---------------------------------
// 2
#include <stdio.h>

int main() {
    int planet_COORD = 5972-12563-145263;
    printf("planet_COORD: %d\n", planet_COORD);
    return 0;
}

---------------------------------
// OUTPUT - 5972-12563-145263
---------------------------------

// 3 
#include <stdio.h>
#define GRAVITY 100.8

int main() {
    printf("Gravity: %.1f\n", GRAVITY);
    return 0;
}
--------------------------------
Gravity: 100.8
-------------------------------

// 4 
#include <stdio.h>

int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello %s! Here are my COORDINATES - 25637588964\n", name);
    return 0;
}
--------------------------------
Enter your name: ml
Hello ml! Here are my COORDINATES - 25637588964
-------------------------------

// 5

