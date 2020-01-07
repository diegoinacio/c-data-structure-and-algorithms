#include <stdio.h>

int main() {
    // Support variables
    int N = 4;

    // Array declaration
    float arrayA[N];  // Array with N positions

    // Array initialization
    arrayA[0] = 0.5;
    arrayA[1] = 1.5;
    arrayA[2] = 2.5;
    arrayA[3] = 3.5;

    // Output by accessing the element
    printf("The third element of the arrayA has index as 2 so it is %f\n", arrayA[2]);

    // Loop over all the elements
    for (int i = 0; i < N; i++) {
        printf("arrayA[%d] - %f\n", i, arrayA[i]);
    }

    printf("\n");

    // Initialize an array without declaration
    double arrayB[] = {0.1, 0.2, 0.3, 0.4};  // it is not necessary to specify the size of the array

    for (int i = 0; i < N; i++) {
        printf("arrayB[%d] - %f\n", i, arrayB[i]);
    }

    printf("\n");

    // Matrices or multi-dimensional arrays
    int arrayC[N][N];

    printf("arrayC - Matrix %dx%d\n", N, N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arrayC[i][j] = i*N + j;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", arrayC[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}