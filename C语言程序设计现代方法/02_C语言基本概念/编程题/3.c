#include <stdio.h>
#define PI 3.14

int main(void)
{
  int r;
  float v;
  
  printf("请输入球体的半径: ");
  // printf("球体的半径是%d\n",r);
  scanf("%d",&r);
  printf("球体的半径是%d\n",r);
  // r = 10;
  v = (4.0f / 3.0f) * PI * r * r * r;
  printf("球体体积是%f\n",v);
}
