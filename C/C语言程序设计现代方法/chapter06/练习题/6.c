/*
 * Name: 6.c 
 * Purpose: 将1.c改为for语句
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  for (int i = 1;i <= 128;i *= 2)
  {
    printf("%d", i);
  }
}