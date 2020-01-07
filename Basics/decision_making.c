#include <stdio.h>

int main() {
    // Support variables
    int a, b;
    a = 10;
    b = 20;

    // if single statement
    if(b > a) printf("b is greater than a so b > a is true\n");

    // if multiple statement
    if(b > a) {
        printf("a = %d and b = %d ", a, b);
        printf("so 'b' is greater than 'a'\n");
    }

    // if ... else statement
    if(a == b) {
        printf("This statement is not going to be shown\n");
    }
    else {
        printf("'a' is not equal to 'b' so a == b is false\n");
    }

    // if ... else if statement
    if(a == b) {
        printf("This statement is not going to be shown\n");
    }
    else if (b > a) {
        printf("'b' is greater than 'a' ");
        printf("so this second condition is true\n");
    }
    else {
        printf("This statement is not going to be shown\n");
    }

    // Ternary operator ?: statement (expresion ? if true : else)
    printf(a != b ? "a is not equal to b\n" : "This statement is not going to be shown\n");

    // Switch and case
    switch (a) {
        case 20:
            printf("'a' is not equal to 20");
            break;
        
        case 30:
            printf("'a' is not equal to 30");
            break;
        
        default:
            printf("'a' is equal to none of those cases ");
            printf("so only the default statement will be shown\n");
            break;
    }

    return 0;
}