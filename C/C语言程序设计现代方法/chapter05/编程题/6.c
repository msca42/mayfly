/*
 * Name: 6.c 
 * Purpose: 修改upc.c程序，使其可以检测UPC的有效性，用户输入UPC之后，程序将显示VALID或NOT VALID
 * Author: mayfly
 */
/* 算术运算 */
/* Computers a Universal Product Code check digit */
/*
分析: 如何验证upc的有效性，输入检查位的结果和计算检查位的结果一致
*/

#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;
  
  // 声明upc
  int check;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  printf("Enter check digit:");
  scanf("%1d",&check);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  if (check == 9 - ((total - 1) % 10))
    printf("VALID");
  else
    printf("NOT VALID");


  return 0;
}
