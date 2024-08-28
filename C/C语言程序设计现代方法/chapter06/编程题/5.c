/*
 * Name: 5.c
 * Purpose: 显示逆序，无论该数多少位
 * Author: mayfly
 * Description:
 *    提示: 使用do语句，将输入的值重复除以10，直到达到0为止
 */

#include <stdio.h>

int main(void)
{
  int number,renumber,remainder;
  printf(" Enter a number: ");
  scanf("%d", &number);
  renumber = 0;
  while (number != 0)
  {
      remainder = number % 10 ;
      number = number / 10;
      renumber = renumber * 10 + remainder;
      // 逆序显示  re = re * 10 + remainder
  } 
  printf(" The reversal is: %d\n",renumber);
  
}
/* 
分析思路: 
  逆序显示，首先确定逆序数字的计算公式， 自身 * 10 + 余数
*/