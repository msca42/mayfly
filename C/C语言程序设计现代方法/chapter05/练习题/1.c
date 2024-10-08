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
  i = 2;
  j = 3;
  k = i * j == 6;  // k = (i * j == 6); 1
  printf("%d", k); // 1

  // b
  i = 5;
  j = 10;
  k = 1;                   // ((k > i)<j)
  printf("%d", k > i < j); // 1

  // c
  i = 3;
  j = 2;
  k = 1;
  printf("%d", i < j == j < k); //  1

  // d
  i = 3;
  j = 4;
  k = 5;
  printf("%d", i % j + i < k); //0
}