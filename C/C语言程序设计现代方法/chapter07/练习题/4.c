/*
合法
i += c;
c = 2 * c  - 1;
putchar(c)

非法
printf(c) 没有转换说明符
*/
#include <stdio.h>
int main(void)
{
    char c  = 'a';
    printf("%c",c);
}