#include <stdio.h>

int main(void)
{
  int numbers;
  printf("Enter a two-digit number:");
  scanf("%d", &numbers);
  printf("The reversal is: %d%d%d\n", numbers % 10, numbers / 10 % 10, numbers / 100);
  return 0;
}