#include <stdio.h>

int main(void)
{ 
  int i;
  int j;
  // a
  // i = 6 j = 16
  // i = 5;
  // j = ++i * 3 - 2;
  // printf("%d %d",i,j);

  // b
  // i = 6 j = -7
  // i = 5;
  // j = 3 - 2 * i++;
  // printf("%d %d",i,j);

  // c
  // i = 6 j = 23
  // i = 7;
  // j = 3 * i-- + 2;
  // printf("%d %d",i,j);


  // d
  // i = 6 j = 15
  i = 7;
  j = 3 + --i * 2;
  printf("%d %d",i,j);
}