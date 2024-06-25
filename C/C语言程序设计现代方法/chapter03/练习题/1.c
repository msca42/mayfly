/* Printf格式化输出*/
#include <stdio.h>

int main(void)
{
  // a:    86,1040
  printf("%6d,%4d\n", 86, 1040);
  // b: 3.02530e+01,
  printf("%12.5e\n", 30.253);
  // c:83.1620
  printf("%.4f\n", 83.162);
  // d:1e-06
  printf("%-6.2gTest\n", .0000009979);
}