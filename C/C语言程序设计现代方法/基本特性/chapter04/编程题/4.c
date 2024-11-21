#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&number);
    // 十进制转八进制 输出五位数
    int first = number % 8;
    int second = number / 8 % 8;
    int third  = number / 64 % 8;
    int forth = number / 512 % 8;
    int fifth = number / 4096 % 8;
    printf("In octal, your number is: %d%d%d%d%d",fifth,forth,third,second,first);
}