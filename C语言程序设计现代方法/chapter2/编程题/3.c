#include <stdio.h>

#define PI 3.14


int main(void)
{
  int r;
  printf("请输入球体的半径:");
  scanf("%d",&r);
  float V = (4.0f/3.0f)* PI * r * r * r;
  printf("%f\n",V);

}