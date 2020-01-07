#include <stdio.h>

int main() {
    float a = 10;

    // The operator & gets the memory address of he variable
    printf("The value of 'a' is %.02f and the address is %p\n", a, &a);

    // Declaring a pointer with the same type of the variable
    float *p;

    // Initialize a pointer
    p = &a;
    printf("The address stored in 'p' is %p and the its value is %.02f\n", p, *p);

    // Pointer of pointers
    float **pp = &p;
    printf("The address stored in 'pp' is %p, which has as the value the address (p) %p where the value (a) is %.02f\n", pp, *pp, **pp);

    return 0;
}