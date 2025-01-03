#include <stdio.h>

double inner_product(double a[], double b[], int n);


double inner_product(double a[], double b[], int n)
{
    int result = 1;
    for(int i = 0; i < n; i++)
    {
        result *= (a[i]* b[i]);
    }

    return result;
}