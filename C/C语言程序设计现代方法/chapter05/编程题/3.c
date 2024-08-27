/*
 * Name: 3.c 
 * Purpose: 修改broker程序
 * Author: mayfly
 * Description: 
 *  不直接输入交易额，要求用户输入股票的数量和每股的价格
 *  增加语句用来计算经纪人竞争对手的佣金(少于2000股的佣金位每股33美元+3美分，2000股或更多时佣金为每股33美元+2美分)，在显示原有经济人佣金的同时，也显示出竞争对手的佣金
 */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
  // float commission, value;
  // 声明股票数量和价格
  // commission: 佣金
  // price 每股价格
  // value: 交易额
  float commission,price,value; 
  // number: 股票数量
  int number;
  
  
  //  printf("Enter value of trade: ");
  // scanf("%f", &value);
  // 输入股票数量和价格
  printf("Enter number of trade: ");
  scanf("%d",&number);
  printf("Enter price of trade: ");
  scanf("%f",&price);

  // 变量逻辑
  value = price * number;


  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;
  printf("Commission: $%.2f\n", commission);

  if(number < 2000)
    commission = 33.00f+ 0.03 * number;
  else  
    commission = 33.00f + 0.02 * number;
  printf("Commission of Others: $%.2f\n", commission);
  return 0;
}