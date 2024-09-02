/*
 * Name: 1.c 
 * Purpose:  确定最小值
 * Author: mayfly
 * Description:
 *  如果i * i 超过int类型的最大取值，square2.c将会失败，确定导致失败的n的最小值
 *  尝试将i类型改为short和long、
 *  总结你的机器用于存储整数类型的位数
 */
/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <stdint.h>

int main(void)
{
  short int i;

  for (i = 0; (i * i) < INT16_MAX && (i*i>=0); i++)
  {
    printf("%hd %hd\n", i, i * i);
  }
  printf("%hd",i);

  return 0;
}
/*
这道题目可以知道如下内容
- 标准库 stdint.h
  - 宽度完全确定的整数 intN_t
- 通过标准库可以获取8位、16位、32位、64位的最大值，对它们求平方根可以获取题目中所需的n的大小
- 对于64位的机器
  - short 对应 2^16
  - int 对应 2^32
  - long 对应 2^64
  
*/