/*
 * Name: 2.c 
 * Purpose: 输入一个三位数，然后按照逆序打印这个数
 * Author: mayfly
 * Description:
 *  Enter a three-digit number: 123
 *  The reversal is: 321
 */
#include <stdio.h>

int main(void)
{
  int number;
  printf(" Enter a three-digit number: ");
  scanf("%d", &number);
  printf(" The reversal is: %d\n", number % 10 * 100 + number/10 % 10 * 10 + number / 100);
}