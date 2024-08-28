/*
 * Name: 2.c 
 * Purpose: 输入两个数，计算并显示这两个整数的最大公约数
 * Author: mayfly
 * Description:
 *  Euclid算法:
 *    变量m、n存储两个数，如果n为0,m中的值就是GCD，否则计算m除以n的余数，把n保存到m中，并把余数保存到n中
 *  Enter two integers: 12 28
 *  Greatest common divisor: 4
 */
#include <stdio.h>

int main(void)
{
  int m,n, remainder;

  printf("Enter two integers:");
  scanf("%d%d",&m,&n);

  while (n != 0)
  {
   remainder =   m % n;
   m = n;
   n = remainder;
  }
  printf("Greatest common divisor: %d\n",m);
  
  return 0;
} 
 