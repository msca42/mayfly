#include <stdio.h>

int main(void)
{
  int number,mm,dd,yyyy;
  float price;

  printf("Enter item number: ");
  scanf("%d",&number);
  printf("Enter unit price: ");
  scanf("%f",&price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d",&mm,&dd,&yyyy);

  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%d\t$ %.2f\t%d/%d/%d\n",number,price,mm,dd,yyyy);
  
}