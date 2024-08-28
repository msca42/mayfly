/*
 * Name: 9.c
 * Purpose: 修改第二章的编程题8
 * Author: mayfly
 * Description:
 *  要求用户输入还贷的次数并显示每次还贷后剩余的贷款金额
 * 计算公式: （贷款余额 -  每月还款金额） * (1 + 利率)
 * 月利率: 利率% / 12
 */

#include <stdio.h>

int main(void)
{
  // 声明
  float loanAmount; // 贷款余额
  float rate; // 利率
  float payment; // 每月还款金额
  // 还款次数
  int numbers;
  // 输入参数
  printf("Enter amount of loan: ");
  scanf("%f",&loanAmount);
  printf("Enter interest rate: ");
  scanf("%f",&rate);
  printf("Enter monthly payment: ");
  scanf("%f",&payment);
  printf("Enter the number of repay  a loan:");
  scanf("%d",&numbers);

  for(int i = 1; i <= numbers; i++)
  {
     loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12);
      printf("Balance remaining after %d payment: $%.2f\n",i,loanAmount);
  }
  // 根据公式求剩余金额
  // loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12);
  // printf("Balance remaining after first payment: $%.2f\n",loanAmount);
  // loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12); 
  // printf("Balance remaining after second payment: $%.2f\n",loanAmount);
  // loanAmount = (loanAmount - payment) + (loanAmount * rate / 100 / 12);
  // printf("Balance remaining after third payment: $%.2f\n",loanAmount);

}
/*
总结: 原先固定3三次还款，现在通过循环可以持续不断的验证剩余金额
*/