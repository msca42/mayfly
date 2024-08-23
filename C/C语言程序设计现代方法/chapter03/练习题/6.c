/*
 * Name: 6.c 
 * Purpose: 修改addfrac.c程序，使用户在输入字符/前后都可以有空格
 * Author: mayfly
 */
/* Adds two fractions */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d / %d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}
/*
为了实现这个目的，首先/前的空格必须要有，这样才能做到格式串的一一对应，然后/之后的空格，可以忽略，也可以存在，因为scanf在读取的之后会忽略0～∞的空格
*/