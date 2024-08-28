/*
 * Name: 3.c 
 * Purpose: 用户输入一个分数，然后将其约分为最简分式
 * Author: mayfly
 * Description:
 *  Enter a fraction: 6/12
 *  In lowest terms: 1/2
 *  提示，计算最大公约数，然后除以最大公约数
 */
#include <stdio.h>

int main(void)
{
  int m,n, remainder;

  printf("Enter a fraction:");
  scanf("%d/%d",&m,&n);

  int a = m;
  int b = n;

  while (b!=0)
  {
    remainder = a % b;
    a = b;
    b = remainder;
  }

  printf("In lowest terms: %d/%d\n",m/a, n/a);

}