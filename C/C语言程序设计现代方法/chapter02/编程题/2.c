/*
 * Name: 2.c 
 * Purpose: 编写一个计算球体体积的程序
 * Author: mayfly
 * Description: r = 10m V = 4/3 *  pi *  r^3
 */

#include <stdio.h>
#define PI 3.14

int main(void) 
{
  int r = 10;
  float V = (4.0 / 3.0) * PI * r * r * r;

  printf("球体体积是: %f\n", V);
}
