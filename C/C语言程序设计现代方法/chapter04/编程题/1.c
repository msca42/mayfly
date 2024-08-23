/*
 * Name: 1.c
 * Purpose: 输入一个两位数，然后按照逆序打印这个数
 * Author: mayfly
 * Description:
 *  Enter a two-digit number: 28
 *  The reversal is: 82
 */
#include <stdio.h>

int main(void)
{
  int number;
  printf(" Enter a two-digit number: ");
  scanf("%d", &number);
  printf(" The reversal is: %d\n", number % 10 * 10 + number / 10);
}