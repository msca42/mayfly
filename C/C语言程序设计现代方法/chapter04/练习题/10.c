#include <stdio.h>

int main(void)
{
  int i, j;
  // a
  i = 6;
  j = i += i;            // i = i + i;
  printf("%d %d", i, j); // 12 12

  // b
  i = 5;
  j = (i -= 2) + 1;      //  i = i -2
  printf("%d %d", i, j); // 3 4

  // c  主要考察类型转换
  i = 7;
  j = 6 + (i = 2.5);
  printf("%d %d", i, j); // 2 8

  // d
  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("%d %d", i, j); // 6 9

}