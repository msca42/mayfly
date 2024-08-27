/*
 * Name: 1.c 
 * Purpose: 确定一个数的位数
 * Author: mayfly
 * Description: 
 *  Enter a number: 374
 *  The number 374 has 3 digits
 *  假设位数不超过4位
 */
#include <stdio.h>

int main(void)
{
  // 声明
  int number;
  int count = 0;
  // 输入
  printf("Enter a number:");
  scanf("%d",&number);
  // 逻辑
  if(number>=0 && number <10)
    count = 1;
  else if (number>=10 && number <100)
    count = 2;
  else if (number>=100 && number <1000)
    count = 3;
  else 
    count = 4;
  // 输出
  printf("The number %d has %d digits\n",number,count);
}
