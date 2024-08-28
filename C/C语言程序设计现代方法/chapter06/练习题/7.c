/*
 * Name: 7.c 
 * Purpose: 将2.c改为for语句
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  for(int i = 9384;i > 0; i /= 10)
  {
    printf("%d", i);
  } 
}