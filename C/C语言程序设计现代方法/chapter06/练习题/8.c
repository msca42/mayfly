#include <stdio.h>

int main(void)
{
  int i;
  for (i = 10; i >= 1; i /= 2)
  {
    // 10 - 11/2 - 5 - 6/2 - 3 - 4/2 - 2 - 3/2 - 1 - 2/2 - 1-2/2-1
    printf("%d", i++);
  }
}