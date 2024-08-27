/*
 * Name: 5.c 
 * Purpose: 判断if语句是否合法
 * Author: mayfly
 * Description:
 *    if (n >= 1 <= 10)
 *       printf("n is between 1 and 10\n");
 *  如果合法，当n=0时会发生什么？
 */

#include <stdio.h>

int main(void)
{
  int n = 0;
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
}
/*
合法，n>=1 <=10 等价于 (n>=1)<=10 
当n = 0 时，结果为 (0>=1) <= 10  ====   0 <= 10 ==== 1
*/