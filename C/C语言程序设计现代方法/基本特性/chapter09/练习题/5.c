#include <stdio.h>

int num_digits(int);


int day_of_year(int n)
{
    int count = 0;
    while (1)
    {
        if(n == 0)
            break;
        n = n / 10;
        count++;
    }

    return count;
    
}