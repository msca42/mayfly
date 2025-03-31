/* Prints a date in legal form */

#include <stdio.h>

int main(void)
{
    // 声明
    int month, day, year;

    // 输入年月日
    printf("Enter date (mm/dd/yy)");
    scanf("%d /%d /%d",&month, &day, &year);

    // 提示与选择
    printf("Dated this %d",day);
    switch (day)
    {
    case 1: case 21: case 31:
        printf("st");
        break;
    case 2: case 22:
        printf("nd");
        break;
    case 3: case 23:
        printf("rd");
        break;
    default:
        printf("th");
        break;
    }

    printf(" day of ");
    switch (month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("Auguest");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Decemeber");
        break;
    }

    printf(", 20%.2d.\n",year);
    return 0;
}

/*
以固定格式显示日期
验证switch语句
*/