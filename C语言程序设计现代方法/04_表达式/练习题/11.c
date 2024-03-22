#include <stdio.h>

int main(void)
{
  int i,j,k;

  // a
  // 0 2
  // i = 1;
  // printf("%d ", i++ -1);
  // printf("%d",i);

  // b
  // 4  11 6
  // i = 10;
  // j = 5;
  // printf("%d ", i++ - ++j);
  // printf("%d %d",i,j);

  // c
  // 0 8 7
  // i = 7;
  // j = 8;
  // printf("%d ", i++ - --j);
  // printf("%d %d",i,j);

  //d
  //3  8 9 4
  i = 7;
  j = 8;
  k = 5;
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d",i,j,k);

}