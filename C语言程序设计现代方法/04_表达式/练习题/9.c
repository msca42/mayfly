#include <stdio.h>

int main(void)
{
  int i;
  int j;
  int k;

  // a
  // i = 7;
  // j = 8;

  // //i = i * (j + 1);  
  // // i = 63 j = 8
  // i *= j + 1;
  // printf("%d %d", i , j);

  // b
  // i = j = k = 1;
  
  // // j = j + k; i = i + j;
  // // k = 1 j = 2 i = 3
  // i += j += k;
  // printf("%d %d %d",i,j,k);

  // c
  // i = 1;
  // j = 2;
  // k = 3;
  
  // // j = j - k; i = i -j;
  // // k = 3 j = -1 i = 2
  // i -= j -= k;
  // printf("%d %d %d",i,j,k);

  // d
  i = 2;
  j = 1;
  k = 0;

  // j = j * k; i = i * j;
  // k = 0 j = 0 i = 0
  i *= j *= k;
  printf("%d %d %d",i,j,k);

}