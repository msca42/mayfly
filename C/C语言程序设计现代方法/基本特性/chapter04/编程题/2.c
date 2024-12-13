#include <stdio.h>

int main(void)
{
    // 声明
    int number;
    
    // 输入
    printf("Enter a three-digit number: ");
    scanf("%d",&number);
    
    // 输出
    printf("The reversal is: %d%d%d\n",number%10,number/10%10,number/100);

    return 0;
}

/*
在1.c的基础上扩展为三位数
*/