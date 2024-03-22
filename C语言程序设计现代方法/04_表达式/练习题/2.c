#include <stdio.h>

int main(void)
{
  int i;
  int j;

  i = 10;
  j = 3;

  int a = (-i) / j;
  int b = -(i / j);
  printf("%d %d",a,b);
}