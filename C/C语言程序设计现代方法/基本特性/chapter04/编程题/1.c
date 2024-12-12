#include <stdio.h>

int main(void)
{
    // 声明
    int number;

    // 输入
    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    
    // 输出
    printf("The reversal is: %d%d\n",number%10,number/10);

    return 0;
}

/*
输入一个两位数，然后逆序打印
重点在于如何使用表达式表示逆序
*/