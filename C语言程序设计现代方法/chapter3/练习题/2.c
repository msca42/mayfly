#include <stdio.h>

int main(void)
{
  float x =10.0;

  printf("%-8.1e\n",x);
  printf("%10.6e\n",x);
  printf("%-8.3g\n",x);
  printf("%6g\n",x);
}