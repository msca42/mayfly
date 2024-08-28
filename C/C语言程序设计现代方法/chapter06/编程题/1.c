/*
 * Name: 1.c 
 * Purpose: 找出用户输入的一串数中的最大值，程序需要用户一个一个输入，当输入0或负数时，程序显示结果
 * Author: mayfly
 * Description:
 *  Enter a number: 60
 *  Enter a number: 38.3
 *  Enter a number: 4.89
 *  Enter a number: 100.62
 *  Enter a number: 75.2295
 *  Enter a number: 0
 *  
 *  The largest number entered was 100.62
 */
// 循环 
#include <stdio.h>

int main(void)
{
  float max = 0;
  float number;
  do {
    printf(" Enter a number: ");
    scanf("%f",&number);
    if (max < number){
      max = number;
    }
  } while(number > 0);

  printf("The largest number entered was: %.2f\n", max);

}