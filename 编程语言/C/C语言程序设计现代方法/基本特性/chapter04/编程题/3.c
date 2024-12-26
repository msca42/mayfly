#include <stdio.h>

int main(void)
{
    // 声明
    int digit_1,digit_2,digit_3;
    
    // 输入
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&digit_1,&digit_2,&digit_3);
    
    // 输出
    printf("The reversal is: %d%d%d",digit_3,digit_2,digit_1);

    return 0;
}
/*
重新书写2.c 不使用算术分割
*/