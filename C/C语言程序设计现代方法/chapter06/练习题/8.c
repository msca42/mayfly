/*
 * Name: 8.c 
 * Purpose: 判断输出
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i;
  for (i = 10; i >= 1; i /= 2)
  {
    printf("%d", i++);
  }
}
// p 10  i = 11 i = 5
// p 5  i= 6  i = 3
// p 3  i = 4  i = 2
// p 2  i = 3 i = 1
// p 1 i = 2 i = 1
// p 1 i = 2 i = 1
// ...