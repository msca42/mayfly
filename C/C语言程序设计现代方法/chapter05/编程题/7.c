/*
 * Name: 7.c 
 * Purpose: 从用户输入的4个整数中找出最大值和最小值
 * Author: mayfly
 * Description
 *  Enter four integers: 21 43 10 35
 *  Largest: 43
 *  Smallest: 10
 * 使用4条if语句
 */
#include <stdio.h>

int main(void)
{
  //输入四个数
  int num1,num2,num3,num4;
  int max1,min1,max2,min2;

  printf("Enter four integers: ");
  scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

  // 比较
 if(num1 > num2){
    max1 = num1;
    min1 = num2;
 } else {
    max1 = num2;
    min1 = num1;
 }

  if(num3> num4){
    max2 = num3;
    min2 = num4;
  } else {
    max2 = num4;
    min2 = num3;
  }

  if(max1 > max2) {
    printf("Largest: %d\n",max1);
  } else {
    printf("Largest: %d\n",max2);
  }

  if(min1 < min2){
    printf("Smallest: %d\n",min1);
  } else {
    printf("Smallest: %d\n",min2);
  }

}