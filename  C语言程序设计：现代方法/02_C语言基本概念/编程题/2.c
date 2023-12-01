#include <stdio.h>
#define PI 3.14

int main(void)
{
  int r = 10;
  float v = (4.0f / 3.0f) * PI * r * r * r;
  printf("半径为%d的球体体积为%f\n", r , v);
}