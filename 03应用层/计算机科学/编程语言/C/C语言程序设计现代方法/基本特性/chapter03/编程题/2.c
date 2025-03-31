#include <stdio.h>

int main(void)
{
    // 声明
    int number;
    float price;
    int day, month, year;

    // 输入
    printf("Enter item number: ");
    scanf("%d",&number);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d",&month, &day, &year);


    // 输出
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPirce\t\tDate\n");
    
    printf("%-d\t\t$%7.2f\t%02d/%02d/%04d",number,price,month,day,year);
    return 0;
}

/*
对用户录入的产品信息进行格式化
*/