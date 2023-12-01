/* Computers the dimensional weight of a 12x10x8 box*/

#include <stdio.h>

int main(void)
{
  // 初始化
  int height = 8;
  int length = 12;
  int width = 10;
  int volume = height * length * width;

  // 格式化输出
  printf("Dimensions: %dx%dx%d\n",length,width,height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n",(volume + 165) / 166);

  return 0;
}