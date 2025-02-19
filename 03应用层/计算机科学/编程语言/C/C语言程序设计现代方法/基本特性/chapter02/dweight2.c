/* Computes the dimensional weight of a  box from input provided by the user */

#include <stdio.h>

int main(void)
{
    // 声明
    int height, length, width, volume, weight;

    // 输出提示与输入
    printf("Enter height of box: ");
    scanf("%d",&height);
    printf("Enter length of box: ");
    scanf("%d",&length);
    printf("Enter width of box: ");
    scanf("%d",&width);
    
    // 表达式赋值
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // 输出结果
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}