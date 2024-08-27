/*
 * Name: 10.c 
 * Purpose: 判断输出结果
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int i = 1;
  switch (i % 3)
  {
  case 0:
    printf("zero");
  case 1:
    printf("one");
  case 2:
    printf("two");
  }
}
/*
由于没有break,所以结果的onetwo
*/