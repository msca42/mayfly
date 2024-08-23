/*
 * Name: 13.c 
 * Purpose:  判断等同
 * Author: mayfly
 * Description: 表达式++i和i++中只有一个是与表达式(i+=1)完全相同，验证是前者还是后者
 */
#include <stdio.h>

int main(void)
{
  int i;
  i = 10;
  printf("%d\n", ++i); // 11
  i = 10;
  printf("%d\n", i++); // 10
  i = 10;
  printf("%d\n", (i += 1)); // 11
}
/*
++i和(i+=1)相同
i++先在寄存器中存储i,然后进行i+=1
*/