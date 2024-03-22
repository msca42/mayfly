#include <stdio.h>

int main(void)
{
  int num;
  int ge;
  int shi;

  printf("Enter a two-digit number: ");
  scanf("%d", &num);

  shi = num / 10;
  ge = num % 10;
  
  printf("The reversal is: %d%d\n",ge,shi);

}