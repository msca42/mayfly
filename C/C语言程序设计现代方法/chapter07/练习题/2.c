/*
 * Name: 2.c 
 * Purpose:  分析常量是否合法，并区分整数还是浮点数
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
    int a = 010E2;
    printf("%d\n",a);

    int b = 32.1E+5;
    printf("%d\n",b);

    // int c = 0790;  八进制中有9
    // printf("%o",c);

    // int d = 100_100; 整数中存在下划线
    // printf("%d",d);

    float e = 3.978e-2;
    printf("%f\n",e);
}