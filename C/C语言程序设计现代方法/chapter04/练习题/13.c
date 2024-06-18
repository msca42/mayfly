#include <stdio.h>

int main(void)
{
  int i;
  i = 10;
  printf("%d\n", ++i); // 11
  i = 10;
  printf("%d\n", i++); // 10
  i = 10;
  printf("%d\n", (i += 1)); // 11
}