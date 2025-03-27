// 计算球体体积 自行输入半径
#include <stdio.h>

#define PI 3.14f

int main(void)
{

    // 声明
    int radius;

    // 格式化输入
    printf("Please Input the radius if the ball: ");

    scanf("%d", &radius);

    //  运算
    int radius3 = radius * radius * radius;

    // 体积公式
    float volume = (4.0f / 3.0f) * PI * radius3;

    // 输出
    printf("The Volume of ball is  %f cubic metre.", volume);

    return 0;
}
/*
在2.c的基础上增加了输入功能
*/