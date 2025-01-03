/* Sums a series of numbers */

#include <stdio.h>

int main(void)
{   
    // 声明
    int n, sum = 0;

    // 显示提示
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    // 输入
    scanf("%d", &n);

    // 循环
    while (n != 0)
    {
        // 累加
        sum += n;
        scanf("%d", &n);
    }
    // 输出结果
    printf("The sum is: %d\n", sum);

    return 0;
}