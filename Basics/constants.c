#include <stdio.h>

// Define constant by using #define
#define A 85       // Edge a
#define B 132      // Edge b
#define C 720      // Edge c

// Define constant by const keyword
const int D = 157; // Diagonal d
const int E = 725; // Diagonal e
const int F = 732; // Diagonal f

int main() {
    // Show constants
    printf("Edges     -> a = %d, b = %d, c = %d\n", A,B,C);
    printf("Diagonals -> d = %d, e = %d, f = %d\n", D,E,F);
    
    // Euler brick
    printf("### Euler brick\n");
    printf(
        "a^2 + b^2 = d^2 -> %d*%d + %d*%d = %d*%d -> %d + %d = %d -> %d = %d\n",
        A, A, B, B, D, D, A*A, B*B, D*D, A*A + B*B, D*D
    );
    printf(
        "a^2 + c^2 = e^2 -> %d*%d + %d*%d = %d*%d -> %d + %d = %d -> %d = %d\n",
        A, A, C, C, E, E, A*A, C*C, E*E, A*A + C*C, E*E
    );
    printf(
        "b^2 + c^2 = f^2 -> %d*%d + %d*%d = %d*%d -> %d + %d = %d -> %d = %d\n",
        B, B, C, C, F, F, B*B, C*C, F*F, B*B + C*C, F*F
    );

    return 0;
}