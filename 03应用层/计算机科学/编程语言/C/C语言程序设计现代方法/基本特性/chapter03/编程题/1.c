#include <stdio.h>

int main(void)
{
    // 声明
    int day, month, year;

    // 输入赋值
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d /%d /%d",&month, &day, &year);
    
    // 输出
    printf("You entered the date %4d%02d%02d",year,month,day);
    return 0;
}

/*
以月/日/年的格式接受用户输入的信息，并以年月日的格式显示出来
*/