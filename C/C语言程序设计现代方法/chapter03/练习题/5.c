/*
 * Name: 5.c 
 * Purpose: 判断scanf函数的输出结果，给出scanf函数和输入，需要输出
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i;
  float x,y;
  // 12.3 45.6 789
  scanf("%f%d%f", &x, &i, &y);
  // 12.3 45 0.6
  printf("%f%d%f", x, i, y);
}