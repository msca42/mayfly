#include <stdio.h>

int main(void)
{
  int item;
  float price;
  int mm;
  int dd;
  int yyyy;

  printf("Enter item number: ");
  scanf("%d",&item);
  printf("Enter unit price: ");
  scanf("%f",&price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&mm,&dd,&yyyy);
  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$ %.2f\t%d/%d/%d\n",item,price,mm,dd,yyyy);

}