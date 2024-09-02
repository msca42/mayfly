/*
 * Name: 4.c 
 * Purpose:  分析语句是否合法
 * Author: mayfly
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int i  = 0;
  char c = 'a';

  // a
  i += c;

  // b 
  c = 2 * c -1;

  // c
  putchar(c);

  // d
//   printf(c);  没有格式化字符串

}