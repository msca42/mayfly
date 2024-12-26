#include <stdio.h>

// 宏定义圆周率
#define PI  3.14f

int main(void)
{
    // 初始化半径 
    int radius = 10;

    int radius3 = radius * radius * radius;
    
    // 体积公式
    float volume = (4.0f / 3.0f) * PI * radius3;
    
    // 输出
    printf("The Volume of ball is  %f cubic metre.", volume);

    return 0;
}
/*
计算一个球体的体积
*/