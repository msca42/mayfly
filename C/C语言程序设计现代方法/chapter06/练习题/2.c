#include <stdio.h>

int main(void)
{
  int i;
  i = 9384;
  do
  {
    // 9384  938 93 9
    printf("%d", i);
    i /= 10;
  } while (i > 0);
}