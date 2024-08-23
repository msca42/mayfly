/*
 * Name: 3.c
 * Purpose: 输入一个三位数，然后按照逆序打印这个数, 按照upc的思路
 * Author: mayfly
 * Description:
 *  Enter a three-digit number: 123
 *  The reversal is: 321
 */
#include <stdio.h>

int main(void)
{
  int ge, shi, bai;
  printf(" Enter a three-digit number: ");
  scanf("%1d%1d%1d", &bai, &shi, &ge);
  printf(" The reversal is: %d%d%d\n", ge, shi, bai);
}