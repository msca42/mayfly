#include <stdio.h>

int main(void)
{
  printf("Enter the number of x: ");
  int x;
  scanf("%d", &x);
  int y = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d\n", y);
}