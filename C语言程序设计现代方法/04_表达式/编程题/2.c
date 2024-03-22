#include <stdio.h>

int main(void)
{
  int num;
  int ge;
  int shi;
  int bai;

  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  bai = num / 100;
  shi = num / 10 % 10;
  ge = num % 10;
  
  printf("The reversal is: %d%d%d\n",ge,shi,bai);

}