#include <stdio.h>

int main(void)
{
    // 声明
    int n;
    float factorial = 1.0;
    float e = 0.0;
    
    // 输入
    printf("Enter a number to calc e: ");
    scanf("%d",& n);
    
    // 主逻辑
    for(int i = 1; i <= n; i++){
        factorial = factorial * i;
        e =e +  1/factorial;
    }

    // 输出
    printf("The e = %1f\n",e);

    return 0;
}
/*
用公式计算e的计算值
*/