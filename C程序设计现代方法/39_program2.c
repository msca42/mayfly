#include <stdio.h>

int main(void)
{
  int number;
  float price;
  int mm,dd,yyyy;
  printf("Enter item number:");
  scanf("%d",&number);
  printf("Enter unit price:");
  scanf("%f",&price);
  printf("Enter purchase date(mm/dd/yyyy):");
  scanf("%d/%d/%d",&mm,&dd,&yyyy);
  printf("Item\tUnit\t\tPurchase\n");
  printf("\tPrice\t\tDate\n");
  printf("%-d\t$%7.2f\t%-.2d/%-.2d/%-.4d\n",number,price,mm,dd,yyyy);

  return 0;
}