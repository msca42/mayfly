#include <stdio.h>

int main(void)
{
  printf("Enter the number of x: ");
  int x;
  scanf("%d", &x);
  int y = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
  printf("%d\n", y);
}