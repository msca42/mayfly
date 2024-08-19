/*
 * Name: 4.c
 * Purpose: 打印未初始化的int和float类型的变量，观察是否有规律 
 * Author: mayfly
 */

#include <stdio.h>

int main(void)
{
  int i, j, k;
  float x, y, z;
  printf("i = %d, j = %d, k = %d\n", i, j, k);
  printf("x = %f, y = %f, z = %f\n", x, y, z);
}
/* 
结论: 没有任何规律
*/