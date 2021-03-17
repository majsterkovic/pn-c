#include <stdio.h>
#include <stdbool.h>

int maina() {

    printf("bool:  %zi\n", sizeof(bool));
    printf("char:  %zi\n", sizeof(char));
    printf("int:  %zi\n", sizeof(int));
    printf("short:  %zi\n", sizeof(short));
    printf("long:  %zi\n", sizeof(long));
    printf("float:  %zi\n", sizeof(float));
    printf("double:  %zi\n", sizeof(double));

    printf("short int:  %zi\n", sizeof(short int));
    printf("long long int:  %zi\n", sizeof(long long int));
    printf("long double:  %zi\n", sizeof(long double));
    printf("unsigned long:  %zi\n", sizeof(unsigned long));
    printf("signed int:  %zi\n", sizeof(signed int));

    return 0;
}