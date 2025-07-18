// 计算球体体积
// 载入标准输入输出库
#include <stdio.h>

// 宏定义圆周率
#define PI  3.14f

// main函数
int main(void)
{

    // 声明初始化
    // 初始化半径 
    int radius = 10;
    float volume = (4.0f / 3.0f) * PI *  radius * radius * radius;
    
    // 输出
    printf("The Volume of ball is  %.2f cubic metre.", volume);

    return 0;
}
/*
计算一个球体的体积
    思路: 
        了解球体积公式 v = 4/3 PI r^3
        根据公式知道所有变量的值 r = 10 PI = 3.14
        宏定义 声明、赋值、运算、输出
        细节: 整除舍入所有要使用浮点数
*/