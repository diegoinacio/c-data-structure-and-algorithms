#include <stdio.h>

// Funcation declaration

int func_add(int argA, int argB); // will be defined after main()

int func_mult(int argA, int argB) {
    // Returns the integer multiplication between the arguments
    return argA*argB;
}

void func_void() {
    // Returns nothing.. just print
    printf("This function does not return anything because it is void\n");
}

int main() {
    // Support variables
    int a, b, c;

    // Calls the function which adds.
    // Declarated before but defined after main.
    a = 10;
    b = 20;
    c = func_add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, c);

    // Calls the function which multiplies.
    a = 2;
    b = 3;
    c = func_mult(a, b);
    printf("The multiplication of %d by %d is %d\n", a, b, c);

    // Calls the void function
    func_void();

    return 0;
}

int func_add(int argA, int argB) {
    // Returns the integer addition between the arguments
    return argA + argB;
}