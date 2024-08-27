/*
 * Name: 5.c 
 * Purpose: 要求用户输入应纳税所得额，然后显示税金
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int income;
  float taxes;

  printf("please input income");
  scanf("%d", &income);
  
  if (income <= 750)
    taxes = 0.01 * income;
  else if(income <= 2250)
    taxes = 7.50 + (income-750) * 0.02;
  else if(income <= 3750)
    taxes = 37.50 + (income-2250) * 0.03;
  else if(income <= 5250)
    taxes = 82.50 + (income-3750) * 0.04;
  else if(income <= 7250)
    taxes = 142.50 + (income-5250) * 0.05;
  else 
    taxes = 230.50 + (income- 7000) * 0.06;

  printf("taxes is %d",taxes);
}