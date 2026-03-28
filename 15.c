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
// OUTPUT - Gravity: 100.8
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
// OUTPUT - Enter your name: ml
// Hello ml! Here are my COORDINATES - 25637588964
-------------------------------

// 5
#include <stdio.h>

int main() {
    int Batteries = 100, WIRES = 5;
    printf("Total: %d\n", Batteries + WIRES);
    return 0;
}
--------------------------------
// OUTPUT Total: 105
-------------------------------

//6
#include <stdio.h>

int main() {
    int Planet_temp = 50;
    if(Planet_temp > 30)
        printf("Hot planet\n");
    return 0;
}
-------------------------------
// OUTPUT Hot planet
------------------------------
//7
#include <stdio.h>

int main() {
    int moon = 4;
    if(moon)
        printf("Moon exists\n");
    else
        printf("No moon\n");
    return 0;
}
-------------------------------
// OUTPUT - Moon exists
------------------------------
#include <stdio.h>

int main() {
    int Planet_size = 3;
    if(Planet_size == 1)
        printf("Small planet\n");
    else if(Planet_size == 2)
        printf("Medium planet\n");
    else
        printf("Large planet\n");
}
----------------------------------
