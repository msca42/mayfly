#include <stdio.h>

int main(void)
{
    // 声明
    int month, day, year;
    int early_month, early_day, early_year;

    // 输入
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // 初始化
    early_month  = month;
    early_day = day;
    early_year = year;

    // 主逻辑
    while (month != 0 || day != 0 || year != 0)
    {
        if(year < early_year || ( year == early_year && month < early_month) || (year == early_year  && month == early_month && day < early_day)){
            early_month = month;
            early_day = day;
            early_year = year;
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
    }
    
    // 输出
    printf("%2d/%2d/%2d is the earliest date", early_month, early_day, early_year);

    return 0;
}

/*
输入两个日期，显示哪一个更早
*/
/*
 泛化第五章编程题9
 可以输入任意一个日期，直到0/0/0指示输入结束
*/