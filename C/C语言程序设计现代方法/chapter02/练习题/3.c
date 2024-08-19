/*
 * Name: 3.c
 * Purpose: 缩写dweight.c
 * Author: mayfly
 * Description:
 * - 使用初始化器替换对变量height、length和width的赋值
 * - 去掉变量weight, 在最后的printf语句中计算(volume + 165) / 166
 */

#include <stdio.h>

int main(void)
{
  // 使用初始化器
  int height = 8;
  int length = 12;
  int width = 10;

  int volume;
  volume = height * length * width;

  printf("Dimensions: %dx%dx%x\n", length, width, height);
  printf("Vo;ume (cubic inches): %d\n",volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}