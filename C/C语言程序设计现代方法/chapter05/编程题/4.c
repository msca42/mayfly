/*
 * Name: 4.c 
 * Purpose: 根据蒲福风级输入风速，显示对应的描述
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  //声明风速
  int speed;
  // 输入
  printf("please input speed: ");
  scanf("%d",&speed);
  // 逻辑
  if (speed < 1)
    printf("Description is Calm\n");
  else if (speed <= 3)
    printf("Description is Light air\n");
  else if (speed <= 27)
    printf("Description is Breeze\n");
  else if (speed <= 47)
    printf("Description is Gale\n");
  else if (speed <= 63)
    printf("Description is Storm\n");
  else 
    printf("Description is Hurricane\n");
}
