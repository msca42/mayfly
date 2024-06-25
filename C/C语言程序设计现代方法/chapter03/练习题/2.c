/* Printf格式化输出*/
#include <stdio.h>

int main(void)
{
  float x = 10;
  // a
  printf("%-8.1e\n", x);
  // b
  printf("%10.6e\n", x);
  // c
  printf("%-8.3f\n", x);
  // d
  printf("%6.f\n", x);
}