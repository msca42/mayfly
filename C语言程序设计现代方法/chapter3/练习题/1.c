#include <stdio.h>

int main(void)
{
  // a
  printf("%6d,%4d\n",86,1040); //    86,1040
  // b
  printf("%12.5e\n",30.253); // 3.02530e+01 
  // c
  printf("%.4f\n",83.162); //83.1620
  // d
  printf("%-6.2g\n",.0000009979);//1e-6
}