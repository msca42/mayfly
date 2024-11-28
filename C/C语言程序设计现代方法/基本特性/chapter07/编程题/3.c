/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    // double型 的转换说明 
    // scanf lf
    // printf f
    scanf("%lf", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %.2f\n",sum);

    return 0;
    
}