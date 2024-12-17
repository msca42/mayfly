#include <stdio.h>

int main(void)
{
    // 声明
    float threshold;
    float factorial = 1.0;
    float e = 0.0;
    
    // 输入
    printf("Enter a number to calc e: ");
    scanf("%1F",&threshold);

    // 主逻辑
    for(int i = 1; ; i++){
        factorial = factorial * i;
        e = e  + 1.0 / factorial;
        if(1.0 / factorial < threshold) {
            break;
        }
    }

    printf("The e = %1f\n",e);

    return 0;

    
}

/*
修改11.c 
持续执行加法运算，知道当前项小于∑，∑是用户输入的较小的浮点数
*/