#include <stdio.h>

int main(void)
{
    // 声明
    int m,n, remainder;
    
    // 输入
    printf("Enter two integers: ");
    scanf("%d %d",&m,&n);

    // 循环
    while (n != 0)
    {
       remainder = m % n;
       m = n;
       n = remainder;
    }

    // 显示
    printf("Greatest common divisor: %d",m);
    
    return 0;

}

/*
用户输入两个整数，然后显示着两个整数的最大公约数(gcd)
关键核心在于算法: Euclid算法
    - 分别让变量m和n存储两个数的值
    - 如果n为0,停止操作,m是值的gcd
    - 计算m除以n的余数，把n保存到m中,把余数保存到n中
*/