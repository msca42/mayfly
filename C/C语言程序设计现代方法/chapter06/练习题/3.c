/*
 * Name: 3.c 
 * Purpose: 判断输出
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i, j;
  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d", i);
}
// i = 5  j = 4 ; p i = 5 ; 
// i = 4 j = 3; p i = 4;
// i = 3 j = 2; p i = 3;
// i = 2 j = 1; p i = 2;
// i = 1 j = 0; 