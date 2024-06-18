#include <stdio.h>

int main(void)
{
  int i, j, k;
  // a
  i = 7;
  j = 8;
  i *= j + 1;            // i = i * (j + 1);
  printf("%d %d", i, j); // 63  8
  // b
  i = j = k = 1;
  i += j += k;                 // j = j + k; i = i + j
  printf("%d %d %d", i, j, k); // k = 1 j = 2 i = 3
  // c
  i = 1;
  j = 2;
  k = 3;
  i -= j -= k;                 // j = j - k i = i -j;
  printf("%d %d %d", i, j, k); // k = 3 j = -1 i = 2
  // d
  i = 2;
  j = 1;
  k = 0;
  i *= j *= k;                 // j = j * k; i = i * j;
  printf("%d %d %d", i, j, k); // k = 0 j = 0 i = 0
}