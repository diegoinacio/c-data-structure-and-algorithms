#include <stdio.h>

int main() {
    // Bool
    printf("Size of '_Bool' in bytes              : %lu \n", sizeof(_Bool));
    
    // Char
    printf("Size of 'char' in bytes               : %lu \n", sizeof(char));
    printf("Size of 'signed char' in bytes        : %lu [-128 to 127]\n", sizeof(signed char));
    printf("Size of 'unsigned char' in bytes      : %lu [0 to 255]\n", sizeof(unsigned char));
    
    // Int
    printf("Size of 'int' in bytes                : %lu \n", sizeof(int));
    printf("Size of 'signed int' in bytes         : %lu [-2147483648 to 2147483647]\n", sizeof(signed int));
    printf("Size of 'unsigned int' in bytes       : %lu [0 to 4294967295]\n", sizeof(unsigned int));
    
    // Short int
    printf("Size of 'short int' in bytes          : %lu \n", sizeof(short int));
    printf("Size of 'signed short int' in bytes   : %lu [-32768  to 32767]\n", sizeof(signed short int));
    printf("Size of 'unsigned short int' in bytes : %lu [0 to 65535]\n", sizeof(unsigned short int));
    
    // Long int
    printf("Size of 'long int' in bytes           : %lu \n", sizeof(long int));
    printf("Size of 'signed long int' in bytes    : %lu [-9223372036854775808  to 9223372036854775807]\n", sizeof(signed long int));
    printf("Size of 'unsigned long int' in bytes  : %lu [0 to 18446744073709551615]\n", sizeof(unsigned long int));
    
    // Float point type
    printf("Size of 'float' in bytes              : %lu \n", sizeof(float));
    printf("Size of 'double' in bytes             : %lu \n", sizeof(double));
    printf("Size of 'long double' in bytes        : %lu \n", sizeof(long double));

    return 0;
}