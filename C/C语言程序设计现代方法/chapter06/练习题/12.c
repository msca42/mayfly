/*
 * Name: 12.c 
 * Purpose: 修改素数判定
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int d;
  int n = 64;
  
  for(d = 2; d * d < n; d++)
  {
    if (n % d == 0 )
      continue;
  }
}