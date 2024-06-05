/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  // 40,   40,40   ,  040
  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  //   839.210, 8.329e+02,839.21    ,
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
}