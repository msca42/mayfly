/*
 * Name: 12.c
 * Purpose:  修改编程题11，使程序持续执行加分运算，直到当前向小于西格玛，其中西格玛是用户输入的较小的浮点数
 * Author: mayfly
 * Description:
 *  e = 1 + 1/1! + 1/2!+...+1/n!
 *  n表示用户输入的整数
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  // int n;
  _Bool flag = true;
  float number;
  float valueE = 1.0;
  float factorialSum = 1.0;
  int count = 1;
  printf("please input a int number: ");
  scanf("%f",&number);

  while (true)
  {
    if(1/ factorialSum < number){
      break;
    }

    factorialSum = factorialSum * count;
    valueE = valueE +  1/ factorialSum;
    count++;
  }
  
  printf("e的近似值是: %.2f\n",valueE);
}