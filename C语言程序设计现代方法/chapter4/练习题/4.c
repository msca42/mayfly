/*
  C99规则: 如果两个操作数中有一个负数，那么除法的结果向零取整
*/
#include <stdio.h>

int main(void)
{
  printf("8 / 5 = %d\n",8/5);
  printf("-8 / 5 = %d\n",-8/5);
  printf("8 / -5 = %d\n",8/-5);
  printf("-8 / -5 = %d\n",-8/-5);

}