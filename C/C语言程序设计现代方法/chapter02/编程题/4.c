/*
 * Name: 4.c 
 * Purpose: 输入一个美元金额，显示增加5%税率后的金额
 * Author: mayfly
 */

// 预处理器输入输出函数库
#include <stdio.h>
// 定义税率
#define RATE 0.05

//main
int main(void)
{
  // 输入数据
  float amount;
  // 输入提示语
  printf("Enter an amount:");
  scanf("%f",&amount);
  //输出提示语
  printf("With tax added: $%.2f\n",(1 + RATE) * amount);
}