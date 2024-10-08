/*
 * Name: 1.c 
 * Purpose: 判断输出，默认i,j,k是int类型变量
 * Author: mayfly
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;
  // a
  i = 5;
  j = 3;
  printf("%d %d", i / j, i % j); // 1,2
  // b
  i = 2;
  j = 3;
  printf("%d", (i + 10) % j); // 0
  // c
  i = 7;
  j = 8;
  k = 9;
  printf("%d", (i + 10) % k / j); // 1
  // d
  i = 1;
  j = 2;
  k = 3;
  printf("%d", (i + 5) % (j + 2) / k); // 0
}