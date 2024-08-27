/*
 * Name: 7.c 
 * Purpose: 输出显示结果
 * Author: mayfly
 * Description:
 *   当i = 17和-17时
 *      printf("%d\n", i >= 0 ? i : -i);
 */
#include <stdio.h>

int main(void)
{
  int i = 17;
  printf("%d\n", i >= 0 ? i : -i); // 17
  i = -17;
  printf("%d\n", i >= 0 ? i : -i); // 17
}