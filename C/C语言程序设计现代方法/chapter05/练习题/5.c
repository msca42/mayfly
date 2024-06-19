/*
if (n >= 1 <= 10)
  printf("n is between 1 and 10\n");
合法，但并不是表示n的取值范围在1～10之间，而是(n>=1) <= 10 的一个逻辑判断
*/

#include <stdio.h>

int main(void)
{
  int n = 0;
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
}