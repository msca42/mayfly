// 计算球体体积 自行输入半径
#include <stdio.h>

#define PI 3.14f

int main(void)
{

    // 声明
    int radius;

    // 提示语 + 格式化输入
    printf("Please Input the radius if the ball: ");
    scanf("%d", &radius);

    // 体积公式
    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    // 输出
    printf("The Volume of ball is  %.2f cubic metre.", volume);

    return 0;
}
/*
在2.c的基础上增加了输入功能
*/