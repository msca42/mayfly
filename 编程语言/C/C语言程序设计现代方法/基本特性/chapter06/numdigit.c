/* Calculates the number of  digits in an integer */

#include <stdio.h>

int main(void)
{
    // 声明
    int digits = 0, n;

    // 输入
    printf("Enter a nonnegative integer: ");
    scanf("%d",&n);

    // do循环
    do {
        n /= 10;
        digits++;
    } while (n > 0);

    // 输出
    printf("The number has %d digit(s).\n", digits);
    
    return 0;
    
}