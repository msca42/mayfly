#include <stdio.h>

int main(void)
{
    // 声明
    int hour = 0 , minute = 0;
    
    // 输入
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    
    // 输出
    if(hour > 12 && hour <=24){
        printf("Equivalent 12-hour time: %d:%02d PM", hour%12,minute);
    } else {        
        printf("Equivalent 12-hour time: %d:%02d AM", hour,minute);
    }

    return 0;
}
/*
输入24小时制，显示12小时制
*/