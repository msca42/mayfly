#include <stdio.h>

int main(void)
{
    // 声明
    int number,r1,r2,r3,r4,r5;
    
    // 输入
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&number);

    // 十进制转八进制 输出五位数
    r5 = number % 8;
    number = number / 8;
    r4 = number % 8;
    number = number / 8;
    r3 = number % 8;
    number = number / 8;
    r2 = number % 8;
    number = number / 8;
    r1 = number % 8;

    // 输出
    printf("In octal, your number is: %d%d%d%d%d",r1,r2,r3,r4,r5);

    return 0;
}

/*
输入一个整数，并按照八进制显示
*/