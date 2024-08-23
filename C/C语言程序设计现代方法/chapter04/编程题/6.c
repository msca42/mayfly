/*
 * Name: 6.c
 * Purpose: EAN商品标识码
 * Author: mayfly
 * Description: 
 *  计算校验位规则: 2、4、6、8、10、12位相加、1、3、5、7、9、、11相加，第一次相加结果乘3加上第二次相加结果，上述结果减去1，并对10取余数，使用9减去余数
 *  Enter the first 12 digits of an EAN: 869148426000
 *  Check digit: 8
 */
#include <stdio.h>

int main(void)
{
  int i2,i4,i6,i8,i10,i12;
  int j1,j3,j5,j7,j9,j11;
  printf("Enter the first 12 digits of an EAN:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&j1,&i2,&j3,&i4,&j5,&i6,&j7,&i8,&j9,&i10,&j11,&i12);
  int sum_one = i2+i4+i6+i8+i10+i12;
  int sum_two = j1+j3+j5+j7+j9+j11;
  int check_digit = 9- ((( sum_one * 3 + sum_two) -1 ) %10);
  printf("Check digit: %d\n",check_digit);
}