/*
 * Name: 11.c
 * Purpose:  用下面的公式计算e的近似值
 * Author: mayfly
 * Description:
 *  e = 1 + 1/1! + 1/2!+...+1/n!
 *  n表示用户输入的整数
 */
#include <stdio.h>

int main(void)
{
  int n;
  float valueE = 1.0;
  float factorialSum = 1.0;
  printf("please input a int number: ");
  scanf("%d",&n);

  for(int i = 1;i <= n; i++){
    factorialSum = factorialSum * i;
    valueE = valueE +  1/ factorialSum;
  }
  printf("e的近似值是: %.2f\n",valueE);
}
/*
问题: 如何求阶乘
*/