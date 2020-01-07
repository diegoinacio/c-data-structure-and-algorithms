#include <stdio.h>

int main() {
    // Variable declaration
    char v_char;
    int v_uintA, v_uintB;
    unsigned int v_uintC;
    double v_doubleA, v_doubleB;
    long double v_doubleC;
    
    // Variable initialization
    v_char = 'V';
    v_uintA = 10;
    v_uintB = 25;
    v_uintC = v_uintA + v_uintB;
    v_doubleA = 0.1;
    v_doubleB = 0.2;
    v_doubleC = v_doubleA + v_doubleB;
    
    // Output
    printf("v_char = '%c'\n", v_char);
    printf("v_uintA = %d\n", v_uintA);
    printf("v_uintB = %d\n", v_uintB);
    printf(
        "v_uintC = %d + %d = %u\n",
        v_uintA, v_uintB, v_uintC
    );
    printf("v_doubleA = %lf\n", v_doubleA);
    printf("v_doubleB = %lf\n", v_doubleB);
    printf(
        "v_doubleC = %lf + %lf = %Lf\n",
        v_doubleA, v_doubleB, v_doubleC
    );

    return 0;
}