#include <stdio.h>
#define PI 3.14

int main(void)
{
  int r;
  printf("please input radius: ");
  scanf("%f", &r);
  float v = (4.0 / 3.0) * PI * r * r * r;
  printf("%f\n", v);
}