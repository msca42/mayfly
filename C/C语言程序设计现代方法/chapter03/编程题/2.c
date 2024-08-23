/*
 * Name: 2.c 
 * Purpose: 对输入的产品信息进行格式化
 * Author: mayfly
 * Description: 
 * 格式 
 *   Enter item number: 583
 *   Enter unit price: 13.5
 *   Enter purchase date (mm/dd/yyyy): 10/24/2010
 *   Item  Unit     Purchase
 *         Price    Date
 *   583   $ 13.50  10/24/2010
 * 说明: 产品编号、日期 左对齐 单位价格 右对齐，允许美元最大金额取值范围9999.99
 * 
 */

#include <stdio.h>

int main(void)
{
  // 声明
  int item_number;
  float unit_price;
  int mm,dd,yyyy;
  // 输入
  printf("Enter item number:");
  scanf("%d",&item_number);
  printf("Enter unit price:");
  scanf("%f",&unit_price);
  printf("Enter purchase date (mm/dd/yyyy):");
  scanf("%d /%d /%d",&mm,&dd,&yyyy);
  // 输出
  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-d\t\t$%7.2f\t%-d/%-d/%-d\n",item_number,unit_price,mm,dd,yyyy);
}
/*
Q&A
Q1: 为何会出现输入13.5之后，无法输入日期的情况
A1: 因为unit_price的声明和格式串写成整数，所以录入13.5的时候，默认录入13，并在暂存区存储0.5，此时0.5被赋予日期，直接结束输入
Q2: %-.2f 为何实现不了右对齐
A1: 记忆错误，正号表示右对齐，负号表示左对齐, 并且对齐方式需要指定字符宽度，没有指定字符宽度，默认输入数据长度，此时不存在对齐方式，只有组合字符宽度和正负号才能实现对齐
Q3: c:35:28: warning: flag '0' is ignored when flag '-' is present [-Wformat]
A1: 左对齐和0填充是互斥的
*/