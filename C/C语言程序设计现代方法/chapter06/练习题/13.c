/*
 * Name: 13.c 
 * Purpose: 重写循环，使得循环体为空
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int n, m;
  for (n = 0; m > 0; n++, m /= 2)
    ;
}