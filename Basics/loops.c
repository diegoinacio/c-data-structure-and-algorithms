#include <stdio.h>

int main() {
    // Support variables
    int a, b;

    // while loop
    a = 5;
    b = 10;
    while(b > a) {
        printf("%d ", a);
        a++;
    }
    printf("\n");

    // for loop
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // do ... while loop
    a = 1;
    b = 100;
    do {
        printf("%d ", a);
        a += 10;
    } while (a < b);
    printf("\n");

    // nested loops
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", i*5 + j);
        }
    }
    printf("\n");

    return 0;
}