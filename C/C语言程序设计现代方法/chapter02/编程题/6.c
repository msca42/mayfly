/* 在5.c基础上，修改表达式*/
#include <stdio.h>

int main(void)
{
  float x;
  printf("Enter an value  of X: ");

  scanf("%f", &x);

  float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The Result of the polynomial: %f\n", result);

  return 0;
}