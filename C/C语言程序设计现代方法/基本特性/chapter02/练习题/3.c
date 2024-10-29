/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{

    int height = 8, length = 12, width = 10, volume, weight;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n",length,width,height);
    printf("Volume (cubic inches): %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",(volume + 165) /166);

    return 0;
}

/* 
规则
1: 用初始化器替换对变量的赋值
2: 去掉weight变量，在最后的printf语句中计算(volume + 165) / 166
*/