/*
 * Name: 15.c 
 * Purpose: 输出i和j的值，默认i = 1, j = 2
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i, j;
  i = 1;
  j = 2;
  // a
  i += j;                // i = i + j;
  printf("%d %d", i, j); // 3 2

  // b
  i = 1;
  j = 2;
  i--;
  printf("%d %d", i, j); // 0 2

  // c
  i = 1;
  j = 2;
  i *j / i;
  printf("%d %d", i, j); // 1 2

  // d
  i = 1;
  j = 2;
  i % ++j;
  printf("%d %d", i, j); // 1 3
}