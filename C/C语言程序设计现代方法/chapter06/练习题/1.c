#include <stdio.h>

int main(void)
{
  int i;
  i = 1;
  while (i <= 128)
  {
    // 1 2 4 8 16 32 64 128
    printf("%d", i);
    i *= 2;
  }
}