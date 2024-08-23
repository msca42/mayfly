/*
 * Name: 4.c 
 * Purpose: 判断scanf函数的输出结果，给出scanf函数和输入，需要输出
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i, j;
  float x;
  // 10.3 5 6
  scanf("%d%f%d", &i, &x, &j);
  // 10 0.3 5
  printf("%d%f%d", i, x, j);
}