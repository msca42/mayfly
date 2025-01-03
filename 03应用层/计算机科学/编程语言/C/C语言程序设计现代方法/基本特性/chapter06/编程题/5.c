#include <stdio.h>

int main(void)
{
    // 声明
    int number;

    // 输入数字
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // 输出提示
    printf("The reversal is: ");
    // 主逻辑
    do
    {
        printf("%d", number % 10);
        number /= 10;
    } while (number != 0);

    return 0;
}

/*
设计一个程序可以处理不同位的数的逆序输出
*/