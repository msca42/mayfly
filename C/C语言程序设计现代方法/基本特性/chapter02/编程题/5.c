#include <stdio.h>

int main(void)
{
    // 声明
    float x;
    
    // 输入
    printf("Enter an value of x: ");
    scanf("%f",&x);

    // 表达式
    float result = 3 * x * x * x * x * x  + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    
    // 输出
    printf("The Result  of the polynomial:  %f\n", result);

    return 0;
}

/*
输入x值,输出多项式的值
*/