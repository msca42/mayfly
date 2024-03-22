#include <stdio.h>

int main(void)
{
  int i;
  int j;
  int k;

  // a
  // i = 5;
  // j = 3;
  
  // // 1, 2
  // printf("%d %d\n", i / j, i % j);

  // b
  // i = 2;
  // j = 3;
  // // 4
  // printf("%d", (i + 10) % j);

  // c
  // i = 7;
  // j = 8;
  // k = 9;
  // // 1
  // printf("%d", (i + 10) % k / j);

  // d
  i = 1;
  j = 2;
  k = 3;
  printf("%d", (i + 5) % (j + 2) / k);



}