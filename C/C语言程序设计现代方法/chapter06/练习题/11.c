#include <stdio.h>

int main(void)
{
  int i, sum;
  sum = 0;
  for (i = 0; i < 10; i++)
  {
    // 2 4 6 8
    if (i % 2)
      continue;
    sum += i;
  }
  
  printf("%d\n", sum); // 20
}