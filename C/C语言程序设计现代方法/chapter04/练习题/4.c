/*
 * Name: 4.c 
 * Purpose: 判断C99下输出值
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  printf("%d\n", 8 / 5);   // 1
  printf("%d\n", -8 / 5);  // -1
  printf("%d\n", 8 / -5);  // -1
  printf("%d\n", -8 / -5); // 1
}