/* Computers the dimensional weight of a 12" x 10" x 8" box*/

#include <stdio.h>

int main(void)
{
    // 声明 长宽高、体积、重量
    int height, length, width, volume, weight;

    // 赋值
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    // 格式化输出 长宽高、体积、重量
    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);

    return 0;
}