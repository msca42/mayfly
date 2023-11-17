#include <stdio.h>
#define PI 3.14

int main(void)
{
  int r = 10;
  float v = (4.0f/3.0f) * PI * r * r * r;
  printf("%f\n",v);
  return 0;
}