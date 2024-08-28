/*
 * Name: 9.c 
 * Purpose: 修改8.c 改为while循环
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i = 10;
  while (i > 1)
  {
      printf("%d", i++);
      i /= 2;
  }
  
}