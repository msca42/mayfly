/* Converts a  Fahrenheit temperature to Celsius */

#include <stdio.h>

// 宏定义
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    // 声明
    float fahrenheit, celsius;

    // 提示输出与输入
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    // 表达式赋值
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // 输出
    printf("Celsius equivalent: %.1f\n", celsius);

    // 正常返回
    return 0;
}