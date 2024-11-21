#include <stdio.h>

int main(void)
{
    int item;
    float price;
    int mm,dd,yyyy;
    printf("Enter item number: ");
    scanf("%d",&item);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPirce\t\tDate\n");
    printf("%d\t\t$%7.2f\t%02d/%02d/%d",item,price,mm,dd,yyyy);
}