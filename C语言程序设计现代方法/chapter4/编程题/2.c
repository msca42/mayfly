#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter a two-digit number: ");
  scanf("%d",&x);
  printf("The reversal is: %d%d%d\n",(x%10),(x/10%10),(x/100));
}