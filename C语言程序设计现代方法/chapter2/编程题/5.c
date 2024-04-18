#include <stdio.h>

int main(void)
{
  int x;

  printf("Enter x value:");
  scanf("%d",&x);
  printf("last number is %d\n",(3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x  + 7*x - 6));
}