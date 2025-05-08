/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    // 声明
    int num1, denom1, num2, denom2, result_num, result_denom;

    // 输入
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1,&denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2,&denom2);

    // 运算
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    
    // 输出
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;

}
/*
 主要展示scanf的输入格式
*/