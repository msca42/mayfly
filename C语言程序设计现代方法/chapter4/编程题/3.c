#include <stdio.h>

int main(void)
{
  int x,y,z;
  printf("Enter a two-digit number: ");
  scanf("%d",&x);
  x = x/100;
  y = x/10%10;
  z = x%10;
  printf("The reversal is: %d%d%d\n",z,y,x);
}