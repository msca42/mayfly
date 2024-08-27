/*
 * Name: 2.c 
 * Purpose: 判断输出，默认i,j,k是int类型变量
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i, j, k;
  // a
  i = 10;
  j = 5;
  printf("%d", !i < j); //(!i) < j  1

  // b
  i = 2;
  j = 1;
  printf("%d", !!i + !j); // 1

  // c
  i = 5;
  j = 0;
  k = -5;
  printf("%d", i && j || k); // (i && j) || k   1     

  // d
  i = 1;
  j = 2;
  k = 3;
  printf("%d", i < j || k); // 1
}
/*
在C语言中，非0为真，0为假
*/