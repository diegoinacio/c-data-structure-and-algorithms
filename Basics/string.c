#include <stdio.h>

int main() {
    // String is an array of chars
    char stringA[5];
    stringA[0] = 'h';
    stringA[1] = 'e';
    stringA[2] = 'l';
    stringA[3] = 'l';
    stringA[4] = 'o';
    stringA[5] = '\0'; // null terminator
    printf("%s, world!\n", stringA);

    // Initializer without declaration
    char stringB[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s, World!\n", stringB);

    char stringC[] = "HELLO";
    printf("%s, WORLD!\n", stringC);

    return 0;
}