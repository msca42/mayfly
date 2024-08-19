/*
 * Name: 5.c 
 * Purpose: 用户输入一个x值，输出多项式3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6的值
 * Author: mayfly
 */
// 预处理器加载函数库
#include <stdio.h>

// main函数
int main(void)
{
  // 输入x
  // 声明x
  int x;
  //提示语
  printf("请输入x的值:");
  //输入
  scanf("%d",&x);
  // 声明并赋值多项式
  int sum = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
  printf("多项式值为:%d\n",sum);

}