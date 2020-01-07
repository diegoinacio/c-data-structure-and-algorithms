#include <stdio.h>


typedef double float64;

// Define new type from struct
typedef struct {
    float64 real;
    float64 imag;
} Complex;


int main() {
    // Declare structres
    Complex C1;
    Complex *C2;

    // Initialize
    C1.real = 0;
    C1.imag = 2;
    printf("The value of C1 is %.01lf + %.01lfi\n", C1.real, C1.imag);

    // Changing values through pointer
    C2 = &C1;
    (*C2).real = -0.5;
    (*C2).imag = 0.8;
    printf("Now the value of C1 is %.01lf + %.01lfi\n", C1.real, C1.imag);

    // Another way to use struct pointers and change the values
    C2->real = -1;
    C2->imag = 1;
    printf("Now the value of C1 is %.01lf + %.01lfi\n", C1.real, C1.imag);

    return 0;
}