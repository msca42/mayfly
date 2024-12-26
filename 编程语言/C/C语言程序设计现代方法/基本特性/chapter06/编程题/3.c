#include <stdio.h>

int main(void)
{
    // 声明
    int numerator, denominator, m, n, remainder;

    // 输入
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    // 初始化
    m = numerator;
    n = denominator;

    // 主逻辑
    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    // 输出
    printf("In lower terms: %d/%d", numerator / m, denominator / m);

    return 0;
}

/*
 输入一个分数、将其约分为最简分式
 首先计算分子和分母的最大公约数、然后分子和分母都除以最大公约数
*/