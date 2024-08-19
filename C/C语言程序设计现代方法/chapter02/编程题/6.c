/*
 * Name: 6.c 
 * Purpose: 用户输入一个x值，输出多项式((((3 * x + 2) * x - 5) * x - 1)* x + 7) * x - 6的值
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  // 输入一个x = 声明  + 提示 + 输入
  int x;
  printf("请输入一个x的值:");
  scanf("%d",&x);

  // 多项式结果
  int result;
  result = ((((3 * x + 2) * x -5) * x -1) * x + 7)* x - 6;
  printf("多项式的结果是: %d\n",result);

}