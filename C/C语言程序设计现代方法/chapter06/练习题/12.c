#include <stdio.h>

int main(void)
{
  int d, n;
  n = 30;
  _Bool flag = 1;
  for (d = 2; d * d <= n; d++)
  {
    if (n % d == 0)
      flag = 0;
      break;
  }

  if(flag)
  {
    printf("%d",n);
  }

}