#include <stdio.h>
#define PI  3.14

int main(void)
{
    int r;
    printf("请输入球的半径:");
    scanf("%d",&r);
    float v = (4.0 / 3.0) * PI * r * r * r;
    printf("球体的体积是:%f",v);
}