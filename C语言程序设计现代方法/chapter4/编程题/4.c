#include <stdio.h>

int main(void)
{
  int number;
  int wan,qian,bai,shi,ge;

  printf("Enter a number between - and 32768:");
  scanf("%d", &number);
  // 十进制转八进制
  wan = number / 4096;
  qian = number % 4096 / 512;
  bai = number % 512 / 64;
  shi = number % 64 / 8;
  ge = number % 8;
  printf("In octal, your number is :%d%d%d%d%d\n",wan,qian,bai,shi,ge);
}