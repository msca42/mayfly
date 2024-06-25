/*
格式化输入输出
左对齐和前导零填充冲突
*/
#include <stdio.h>

int main(void)
{
  int number;
  float price;
  int day, month, year;
  printf("Enter item number:");
  scanf("%d", &number);
  printf("Enter unit price: ");
  scanf("%f", &price);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%d /%d /%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
//2.c:18:40: warning: flag '0' is ignored when flag '-' is present [-Wformat]
  printf("%-d\t\t$%7.2f\t%02d/%02d/%04d\n", number, price, month, day, year);

  return 0;
}