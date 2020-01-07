#include <stdio.h>

int main() {
    // Support variables
    int a = 4;

    // Arithmetic operators
    printf("### Arithmetic operators\n");
    printf("+  : Addition operator which adds two operands. e.g.: 2 + 3 = %d\n", 2 + 3);
    printf("-  : Subtraction operator which subtracts two operands. e.g.: 7 - 3 = %d\n", 7 - 3);
    printf("*  : Multiplication operator which multiplies two operands. e.g.: 7 * 5 = %d\n", 7 * 5);
    printf("/  : Division operator which divides two operands. e.g.: 8 / 2 = %d\n", 8 / 2);
    printf("%%  : Modulus operator which returns the remainder of an interger division. e.g.: 7 %% 2 = %d\n", 7 % 2);
    printf("++ : Increment operator which increments an integer operand by one. e.g.: if a = %d then a++ = %d\n", a++, a); // Inverted arguments because is a post increment
    printf("-- : Decrement operator which decrements an integer operand by one. e.g.: if a = %d then a-- = %d\n", a--, a); // Inverted arguments because is a post decrement
    
    // Relational operators
    printf("### Relational operators\n");
    printf("== : 'Equal' operator which checks if two operands are equal (true or 1) or not (false or 0). e.g.: 3 == 1 = %d\n", 3 == 1);
    printf("!= : 'Not equal' operator which checks if two operands are different (true or 1) or not (false or 0). e.g.: 4 != 5 = %d\n", 4 != 5);
    printf(">  : 'Greater than' operator which checks if an operand is greater than another (true or 1) or not (false or 0). e.g.: 5 > 4 = %d\n", 5 > 4);
    printf("<  : 'Less than' operator which checks if an operand is less than another (true or 1) or not (false or 0). e.g.: 8 < 7 = %d\n", 8 < 7);
    printf(">= : 'Greater than or equal to' operator which checks if an operand is greater than or equal to another (true or 1) or not (false or 0). e.g.: 5 >= 6 = %d\n", 5 >= 6);
    printf("<= : 'Less than or equal to' operator which checks if an operand is lass than or equal to another (true or 1) or not (false or 0). e.g.: 5 <= 5 = %d\n", 5 <= 5);
    
    // Logical operators
    printf("### Logical operators\n");
    printf("&& : 'Logical AND' operator which checks if two operands are non zero (true or 1) or not (false or 0). e.g.: 3 && 0 = %d\n", 3 && 0);
    printf("|| : 'Logical OR' operator which checks if any of two operands is non zero (true or 1) or not (false or 0). e.g.: 5 || 0 = %d\n", 5 || 0);
    printf("!  : 'Logical NOT' operator which negates a current logical state. e.g.: !(5 == 5) = %d\n", !(5 == 5));
    
    // Binary operators
    printf("### Binary operators\n");
    printf("&  : 'Binary AND' operator which applies a bitwise operation AND over two binary operands. e.g.: 1001 & 0101 = 0001 so 9 & 5 = %d\n", 9 & 5);
    printf("|  : 'Binary OR' operator which applies a bitwise operation OR over two binary operands. e.g.: 0100 & 1000 = 1100 so 4 | 8 = %d\n", 4 | 8);
    printf("^  : 'Binary XOR' operator which applies a bitwise operation XOR over two binary operands. e.g.: 1111 & 1011 = 0100 so 15 ^ 11 = %d\n", 15 ^ 11);
    printf("~  : 'Binary complement' operator which applies a bitwise negation and returns the complement. e.g.: ~1011 = -0100 so ~11 = %d where 11 + ~11 + 1 = %d\n", ~11, 11 + ~11 + 1);
    printf("<< : 'Binary left shift' operator which shifts (given a number of times) bitwisely the bits to the left. e.g.: 0001 << 2 = 0100 so 1 << 2 = %d\n", 1 << 2);
    printf(">> : 'Binary right shift' operator which shifts (given a number of times) bitwisely the bits to the right. e.g.: 1000 >> 3 = 0001 so 8 >> 3 = %d\n", 8 >> 3);

    return 0;
}