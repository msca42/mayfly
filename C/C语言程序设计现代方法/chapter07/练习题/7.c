/*
 * Name: 7.c 
 * Purpose:  将字符转义序列转换为八进制数字转义序列
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
    char a = '\b';
    char b = '\n';
    char c = '\r';
    char d = '\t';

    printf("0%o\n",a);
    printf("0%o\n",b);
    printf("0%o\n",c);
    printf("0%o\n",d);
}

/*
注意事项: %c是字符占位符 %u是十进制 %o是八进制 %x是十六进制
*/





