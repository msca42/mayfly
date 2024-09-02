/*
 * Name: 8.c 
 * Purpose:  将字符转义序列转换为十六进制数字转义序列
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
    char a = '\b';
    char b = '\n';
    char c = '\r';
    char d = '\t';

    printf("0x%x\n",a);
    printf("0x%x\n",b);
    printf("0x%x\n",c);
    printf("0x%x\n",d);
}