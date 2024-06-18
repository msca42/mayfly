#include <stdio.h>

int main(void)
{
  int i, j, k;
  // a
  i = 1;
  printf("%d ", i++ - 1); // 0
  printf("%d", i);        // 2

  // b
  i = 10;
  j = 5;
  printf("%d ", i++ - ++j); //  10 - 6
  printf("%d %d", i, j);    // 11 6

  // c
  i = 7;
  j = 8;
  printf("%d ", i++ - --j); //  7 - 7
  printf("%d %d", i, j);    // 8 7

  // d
  i = 3;
  j = 4;
  k = 5;
  printf("%d ", i++ - j++ + --k); // 3 - 4 + 4
  printf("%d %d %d", i, j, k);    // 4 5 4
}
