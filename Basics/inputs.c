#include <stdio.h>

int main() {
    char name[64];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%i", &age);

    printf("Your name is %s and you are %d.\n", name, age);

    return 0;
}