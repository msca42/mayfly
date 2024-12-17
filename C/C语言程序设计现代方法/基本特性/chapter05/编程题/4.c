#include <stdio.h>

int main(void)
{
    // 声明
    float windspeed;

    // 输入
    printf("Enter the wind speed (n mile/hour): ");
    scanf("%f",&windspeed);
    
    // 判断逻辑与输出
    if(windspeed < 1.0f){
        printf("Calm");
    }else if(windspeed <=3.0f){
        printf("Light air");
    } else if (windspeed <= 27.0f) {
        printf("Breeze");
    } else if(windspeed <= 47.0f){
        printf("Gale");
    } else if(windspeed <= 63.0f){
        printf("Storm");
    } else {
        printf("Hurricane");
    }

    return 0;
}

/*
 输入风俗、显示相应的描述
*/