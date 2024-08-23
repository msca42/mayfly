/*
 * Name: 4.c
 * Purpose: 输入整数，显示该数的八进制
 * Author: mayfly
 * Description:
 *  Enter a  number between 0 and 32767: 1953
 *  In octal, your name is: 03641
 */
#include <stdio.h>

int main(void)
{
  int number;
  printf("Enter a  number between 0 and 32767:");
  scanf("%d",&number);
  int ge = number % 8;
  int shi = number / 8 % 8;
  int bai = number / 64 % 8;
  int qian = number / 512 % 8;
  int wan = number / 4096 % 8;
  printf("In octal, your name is: %d%d%d%d%d",wan,qian,bai,shi,ge);
}