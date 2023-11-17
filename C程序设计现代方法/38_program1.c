#include <stdio.h>

int main(void)
{
  int mm,dd,yy;
  printf("Enter a date(mm/dd/yyyy):");
  scanf("%d/%d/%d",&mm,&dd,&yy);
  printf("You entered the date %d0%d%d\n",yy,mm,dd);
}