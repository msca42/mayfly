/* Computers the dimensional weight of a 12x10x8 box*/

#include <stdio.h>

int main(void)
{
  // 声明
  int height,length,width,volume,weight;

  // 初始化
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  // 格式化输出
  printf("Dimensions: %dx%dx%d\n",length,width,height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n",weight);

  return 0;
}