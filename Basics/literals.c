#include <stdio.h>

int main() {
    // Integer literals
    printf("### Integer literals\n");
    printf("10      : Decimal-literal has no suffix/prefix so 10 is %d (decimal) [0-9]+\n", 10);
    printf("0b11    : Binary-literal has the prefix 0b or 0B so 0b11 is %d (decimal) 0[bB][01]+\n", 0b11);
    printf("0725    : Octal-literal has the prefix 0 so 0725 is %d (decimal) 0[0-7]+\n", 0725);
    printf("0xA4    : Hexadecimals-literal has the prefix 0x or 0X so 0xA4 is %d (decimal) 0[xX][0-9a-fA-f]+\n", 0xA4);
    printf("10u     : Unsigned literal has the suffix u so 10u is %u (decimal) [0-9]+u\n", 10u);
    printf("10l     : Long literal has the suffix l so 10l is %ld (decimal) [0-9]+l\n", 10l);
    printf("10ul    : Unsigned Long literal has the suffix ul so 10ul is %ld (decimal) [0-9]+ul\n", 10ul);
    // Float point literals
    printf("### Floating-pint literals\n");
    printf("10.10   : Double literal so 10.10 is %.02lf [0-9]*\\.[0-9]*\n", 10.10);
    printf("2.7183f : Float literal so 2.7183f is %.02f [0-9]*\\.[0-9]*[fF]*\n", 2.7183f);
    printf("3.1416l : Long double literal so 2.7183l is %.02Lf [0-9]*\\.[0-9]*[lL]*\n", 3.1416l);
    printf("123e-3  : Exponential literal (base 10) so 123e-3 is %g [0-9]*\\.?[0-9]+[eE][+-]?[0-9]+\n", 123e-3);

    return 0;
}