#include <stdio.h>
#include "preprocessors.h"

// Undefine PI2 if it exists
#ifdef PI2
    #undef PI2
#endif

// Define constant TAU given the PI2 indefinition
#ifdef PI
    #define TAU 2*PI
#else
    #define PI 3.14159265359
    #define TAU 2*PI
#endif

// Define function OMEGA
#ifndef OMEGA
    #define OMEGA(tau, f) tau*f
#endif


// Defines the global variable f
double f = 440;


int main() {
    double omega = OMEGA(TAU, f);
    printf("The ordinary frequency is %lf Hz and the angular frequency is %lf\n", f, omega);

    return 0;
}