/*
 * Name: 12.c 
 * Purpose: 在i,j,k都是int类型，求输出结果
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i, j;
  // a
  i = 5;
  j = ++i * 3 - 2;       //
  printf("%d %d", i, j); // 6 16

  // b
  i = 5;
  j = 3 - 2 * i++;
  printf("%d %d", i, j); // 6 -7

  // c
  i = 7;
  j = 3 * i-- + 2;
  printf("%d %d", i, j); // 6 23

  // d
  i = 7;
  j = 3 + --i * 2;
  printf("%d %d", i, j); // 6 15
}