#include <stdio.h>

int main(void)
{
    printf("size of int: %zu\n", sizeof(int));
    printf("size of short: %zu\n", sizeof(short int));
    printf("size of long int: %zu\n", sizeof(long int));
    printf("size of float: %zu\n", sizeof(float));
    printf("size of double: %zu\n", sizeof(double));
    printf("size of long double: %zu\n", sizeof(long double));
}