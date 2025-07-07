/* Converts a Fahrenheit temperature to Celsius */

#include <stdio.h>
// 宏定义
#define FREEZING_PT 32.0f
// 整数除法结果会向下舍入
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
    // 声明
    float fahrenheit, celsius;
    
    // 格式化输入
    printf("Enter Fahrenheit temperature: ");
    scanf("%f",&fahrenheit);

    // 赋值
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    // 格式化输出
    printf("Celeius equivalent: %.1f\n", celsius);

    return 0;
}