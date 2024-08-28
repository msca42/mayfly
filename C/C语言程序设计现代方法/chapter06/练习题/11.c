/*
 * Name: 11.c 
 * Purpose: 判断输出
 * Author: mayfly
 */
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
/* 
问题的关键在在于如何理解if之后的控制表达式i % 2 
等价于 i % 2 == 1, 所以sum是偶数的和
*/