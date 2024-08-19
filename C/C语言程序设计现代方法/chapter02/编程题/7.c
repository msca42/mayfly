/*
 * Name: 7.c 
 * Purpose: 用户输入一个金额，显示使用20、10、5和1美元的钞票付款
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  // 输入金额
  int salary; // 声明
  printf("Enter a dollar amount:"); // 提示语
  scanf("%d",&salary);
  // 拆分金额
  int twentyNumber = salary / 20;
  int tenNumber = salary % 20  / 10;
  int fiveNumber = salary % 10 / 5;
  int oneNumber = salary % 5;
  // 结果显示
  printf("$20 bills: %d\n", twentyNumber);
  printf("$10 bills: %d\n", tenNumber);
  printf(" $5 bills: %d\n", fiveNumber);
  printf(" $1 bills: %d\n", oneNumber);
}