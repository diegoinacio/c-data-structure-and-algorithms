#include <stdio.h>  // printf
#include <stdlib.h> // malloc, calloc, realloc and free

#define NEWLINE printf("\n");
#define FAIL(void) {printf("Memory cannot be allocated!\n"); exit(EXIT_FAILURE);}
#define ARRAY_I(n, a) for(int i = 0; i < n; i++) a[i] = (float)i/(n - 1)  // Init array
#define ARRAY_P(n, a) for(int i = 0; i < n; i++) printf("%.03f ", a[i])   // Print array

int main() {
    float *arrayA, *arrayB;
    int N = 8;
    // Using malloc. One argument and init elements with garbage
    arrayA = (float*)malloc(N*sizeof(float));
    if(arrayA == NULL) FAIL();
    printf("Uninitialized arrayA | ");
    ARRAY_P(N, arrayA);
    NEWLINE;
    ARRAY_I(N, arrayA);
    printf("  Initialized arrayA | ");
    ARRAY_P(N, arrayA);
    NEWLINE;

    // Using calloc. One argument and init elements with 0
    arrayB = (float*)calloc(N, sizeof(float));
    if(arrayB == NULL) FAIL();
    printf("Uninitialized arrayB | ");
    ARRAY_P(N, arrayB);
    NEWLINE;
    ARRAY_I(N, arrayB);
    printf("  Initialized arrayB | ");
    ARRAY_P(N, arrayB);
    NEWLINE;

    // Using realloc to reallocate existing allocations
    arrayB = (float*)realloc(arrayB, 2*N*sizeof(float));
    if(arrayB == NULL) FAIL();
    printf("  Reallocated arrayB | ");
    ARRAY_P(2*N, arrayB);
    NEWLINE;

    // Release the block of allocated memory
    free(arrayA);
    free(arrayB);

    return 0;
}