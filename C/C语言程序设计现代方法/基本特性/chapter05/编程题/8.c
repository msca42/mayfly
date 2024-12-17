#include <stdio.h>

int main(void)
{
    // 声明
    int hour,minute;
    int input_minutes;
    
    // 输入
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    
    // 24h时间转化
    input_minutes =  hour * 60 + minute;
    // 计算逻辑并输出
    if(input_minutes < (8 * 60 + 9 * 60 + 43)/2){
        printf("Closest departure time is 8:00 a.m, arriving at  10:16 a.m");
    } else if(input_minutes < (9 * 60 + 43  + 11* 60  + 19)/2) {
        printf("Closest departure time is 9:43 a.m, arriving at  11:52 a.m");
    } else if(input_minutes < (11 * 60 + 19 + 12* 60 + 47)/2){
        printf("Closest departure time is 11:19 a.m, arriving at  1:31 p.m");
    } else if (input_minutes < (12 * 60 + 47 + 14 * 60 )/2){
        printf("Closest departure time is 12:47 a.m, arriving at  3:00 p.m");
    } else if (input_minutes < (14 * 60 + 15* 60 + 45)/2){
        printf("Closest departure time is 2:00 p.m, arriving at  4:08 p.m");
    } else if (input_minutes < (15 * 60 + 45  + 19 * 60)/2){
        printf("Closest departure time is 3:45 p.m, arriving at  5:55 p.m");
    } else if (input_minutes < (19 * 60 + 21 * 60 + 45)/2){
        printf("Closest departure time is 7:00 p.m, arriving at  9:20 p.m");
    } else  {
        printf("Closest departure time is 9:45 p.m, arriving at  11:58 p.m");
    }
    
    
    

}

/*
输入一个时间(24小时制)，选择起飞时间与用户最接近的航班
显示起飞时间和抵达时间
*/