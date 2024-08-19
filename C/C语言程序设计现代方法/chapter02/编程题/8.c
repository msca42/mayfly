/*
 * Name: 8.c 
 * Purpose: 计算第一二三月还贷后剩余金额,参数: 剩余贷款金额、利率、每月还款金额
 * 计算公式: （贷款余额 -  每月还款金额） * (1 + 利率)
 * 月利率: 利率% / 12
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  // 声明
  float loanAmount; // 贷款余额
  float rate; // 利率
  float payment; // 每月还款金额
  // 输入参数
  printf("Enter amount of loan: ");
  scanf("%f",&loanAmount);
  printf("Enter interest rate: ");
  scanf("%f",&rate);
  printf("Enter monthly payment: ");
  scanf("%f",&payment);
  // 根据公式求剩余金额
  loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12);
  printf("Balance remaining after first payment: $%.2f\n",loanAmount);
  loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12); 
  printf("Balance remaining after second payment: $%.2f\n",loanAmount);
  loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12);
  printf("Balance remaining after third payment: $%.2f\n",loanAmount);

}