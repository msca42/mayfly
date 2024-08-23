/*
 * Name: 5.c
 * Purpose: 重写upc程序，使用户可以一次输入11位数字，
 * Author: mayfly
 * Description: 
 *  Enter the first 11 digits of a UPC: 01380015173
 *  Check digit: 5
 */
/* Computers a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&i1, &i2, &i3, &i4, &i5,&j1, &j2, &j3, &j4, &j5);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
  return 0;
}


