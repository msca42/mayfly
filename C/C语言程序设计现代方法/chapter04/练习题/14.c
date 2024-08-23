/*
 * Name: 14.c 
 * Purpose:  在语句中添加()
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int a, b, c, d, e;
  // a
  ((a * b) - (c * d)) + e;

  // b
  ((a / b) % c) / d;

  // c
  (((-a) - b) + c) - (+d);

  // d
  ((a * (-b)) / c) - d;
}