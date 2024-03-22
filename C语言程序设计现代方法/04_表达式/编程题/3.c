#include <stdio.h>

int main(void)
{
  int ge;
  int shi;
  int bai;

  printf("Enter a three-digit number: ");
  scanf("%d%d", &bai,&shi,&ge);

  
  printf("The reversal is: %d%d%d\n",ge,shi,bai);

}