#include <stdio.h>

int main(void)
{
  int num;
  int ge;
  int shi;
  int bai;
  int qian;
  int wan;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d",&num);
  

  ge = num % 8 ;
  shi = num % (8*8) / 8;
  bai = num % (8*8*8) /(8*8);
  qian = num % (8*8*8*8)/(8*8*8);
  wan = num % (8*8*8*8*8) /(8*8*8*8);

  printf("In octal, your number is: %d%d%d%d%d\n",wan,qian,bai,shi,ge);
}
