#include <stdio.h>

int main(void)
{
  int digit = 0;
  printf("Enter a number:");
  scanf("%d", &digit);
  if (digit >= 0 && digit <= 9)
    printf("The number %d has 1 digits", digit);
  else if (digit >= 10 && digit <= 99)
    printf("The number %d has 2 digits", digit);
  else if (digit >= 100 && digit <= 999)
    printf("The number %d has 3 digits", digit);
  else if (digit >= 1000 && digit <= 9999)
    printf("The number %d has 4 or more digits", digit);
  else 
    printf("The number is not between 1 and 9999");
  return 0;
}