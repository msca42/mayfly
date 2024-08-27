/*
 * Name: 6.c 
 * Purpose: 判断if语句是否合法
 * Author: mayfly
 * Description:
 *    if (n == 1 - 10)
 *       printf("n is between 1 and 10\n");
 *  如果合法，当n=5时会发生什么？
 */

#include <stdio.h>

int main(void)
{
  int n = 5;
  if (n == 1 - 10)
    printf("n is between 1 and 10\n");
}
/*
合法的， n== 1 - 10 等价于  n== （1 - 10）   不打印
*/