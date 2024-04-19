/*
  C89规则: 如果两个操作数中有一个负数，那么除法的结果可以向上取整可以向下取整
*/
#include <stdio.h>

int main(void)
{
  printf("8 / 5 = %d\n",8/5);
  printf("-8 / 5 = %d\n",-8/5);
  printf("8 / -5 = %d\n",8/-5);
  printf("-8 / -5 = %d\n",-8/-5);

}