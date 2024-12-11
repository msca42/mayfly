/* 
编译时没有警告信息
*/
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/* 
考察C语言编译链接和运行的基本原理

需要注意的是在main函数的末尾通常需要返回一个与main前缀相对应的类型值，正常为0，这里没有写，是现在编译器自动补齐
*/