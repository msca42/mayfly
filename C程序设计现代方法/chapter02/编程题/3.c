#include <stdio.h>
#define PI 3.14

int main(void)
{
  int r;
  printf("请输入球体半径:");
  scanf("%d",&r);
  float V = 4.0f/3.0f * PI * r * r * r;
  printf("球体体积是%f\n",V);
}