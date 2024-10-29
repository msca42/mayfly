#include <stdio.h>
#define PI 3.14

int main(void)
{
    // 自行输入球体体积
    int r;
    printf("请输入球体半径:");
    scanf("%d",&r);
    
    float v = (4.0f/3.0f) * PI * r * r * r ;

    printf("球体体积为:%f", v);
}