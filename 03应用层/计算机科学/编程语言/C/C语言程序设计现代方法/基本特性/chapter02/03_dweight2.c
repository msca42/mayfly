/* Computes the dimensional weight of a box from input provided by the user */

#include <stdio.h>

int main(void)
{
    // 声明
    int height, length, width, volume, weight; 

    // 提示 + 格式化输入
    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    
    // 赋值
    volume = height * length * width;
    weight = (volume  + 165) / 166;

    // 格式化输出
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    // 返回
    return 0;

}