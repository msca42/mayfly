/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    // 声明
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    // 输入
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);


    // 表达式
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    // 输出
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
/*
重写upc.c 一次输入11个数字
*/