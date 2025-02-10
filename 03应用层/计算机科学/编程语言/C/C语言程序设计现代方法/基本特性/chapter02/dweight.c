/* Computes the dimensional weight of a 12" x 10" x 8" box*/
/*
运费计算: 体积除以166，如果商大于箱子实际重量，按照空间重量收费
空间重量: 长、宽、高

*/


#include <stdio.h>

int main(void)
{
    // 声明
    int height, length, width, volume, weight;

    // 赋值
    height = 8;
    length = 12;
    width  = 10;
    volume = height * length * width;
    weight = (volume  + 165) / 166;

    // 输出 显示变量的值
    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);

    return 0;

}