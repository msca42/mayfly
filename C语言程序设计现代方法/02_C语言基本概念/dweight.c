/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>

int main(void)
{
  // 初始化 = 声明 + 赋值
  // 变量的声明: 类型、变量名
  int height, length, width, volume, weight;
  
  // 赋值，将字面量(常量)赋值给变量
  height = 8;
  length = 12;
  width  = 10;
  volume = height * length * width;
  weight = (volume + 165) / 166;

  // 格式化输出 占位符%d，
  // 占位符%f默认显示小数点后6位数字，强制显示小数点后p位可以使用%.pf
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}