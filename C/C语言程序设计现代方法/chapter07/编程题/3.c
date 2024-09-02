/*
 * Name: 3.c 
 * Purpose:  修改sum2.c 对double型值组成的数列求和
 * Author: mayfly
 */
/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(void)
{
  double  n, sum = 0;

  printf("This program syms a series of integers.\n");
  printf("Enter integers (0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0)
  {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is : %.2lf\n", sum);

  return 0;
}