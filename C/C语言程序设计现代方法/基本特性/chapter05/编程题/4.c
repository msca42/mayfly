#include <stdio.h>

int main(void)
{
    // 声明风速
    float windspeed;

    // 输入风速
    printf("Enter the wind speed (n mile/hour): ");
    scanf("%f",&windspeed);

    //核心逻辑
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
用户输入风速，显示描述
*/