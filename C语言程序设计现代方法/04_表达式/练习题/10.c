#include <stdio.h>

int main(void)
{
  int i;
  int j;

  // a
  // i = 12 j = 12
  // i = 6 ;
  // j = i += i;
  // printf("%d %d",i,j);

  // b 
  // i = 3 j  = 4
  // i = 5;
  // j = (i -= 2) + 1;
  // printf("%d %d",i,j);

  // c
  // i = 2
  // j = 8
  // i = 7;
  // j = 6 + (i = 2.5);
  // printf("%d %d",i,j);

  // d
  // i = 6 j = 9
  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("%d %d",i,j);
}