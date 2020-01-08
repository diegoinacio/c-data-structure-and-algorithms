#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("The number of arguments is: %d\n", argc - 1);
    printf("p.s.: The argument 0 is: %s\n", argv[0]);
    for (int i = 1; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}