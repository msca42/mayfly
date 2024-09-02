/*
 * Name: 7.c 
 * Purpose:  修改第三章编程题6
 * Author: mayfly
 * Description:
 *  用户可以对两个分数进行加减乘除（在分数中间输入+、-、*、/符号）
 */
/*
 * Name: 6.c 
 * Purpose:  修改addfrac.c程序，使用户可以同时输入两个分数，中间用加号隔开
 * Author: mayfly
 * Description: 
 *  Enter two fractions separated by a plus sign: 5/6+3/4
 *  The sum is 38/24
 */
/* Adds two fractions */
#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char ch;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1,&ch, &num2, &denom2);


  result_denom = denom1 * denom2;

  switch (ch)
  {
  case '+':
      result_num = num1 * denom2 + num2 * denom1;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
  case '-':
       result_num = num1 * denom2 - num2 * denom1;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
  case '*':
      result_num = num1 * num2;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
  case '/':
      result_num = num1 * denom2;
      result_denom = num2 * denom1;
      printf("The result is %d/%d\n", result_num, result_denom);
      break;
  }

  return 0;
}