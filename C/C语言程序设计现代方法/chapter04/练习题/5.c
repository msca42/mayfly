#include <stdio.h>

int main(void)
{
  printf("%d\n", 8 % 5);   // 3
  printf("%d\n", -8 % 5);  // -3 2
  printf("%d\n", 8 % -5);  // 3 -2
  printf("%d\n", -8 % -5); // -3
}