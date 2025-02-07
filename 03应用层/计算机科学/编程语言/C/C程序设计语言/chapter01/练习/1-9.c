/* 将输入赋值到输出的程序，并且将其中连续多个空格用一个空格代替*/
#include <stdio.h>

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        while (c == ' ')
        {
            c = getchar();
            if (c != ' ')
            {
                putchar(' ');
            }
        }
        putchar(c);
        c = getchar();
    }
}

/*
如何将多个空格用一个空格代替
如何包含2~∞个空格，开始是空格，结束不是空格
*/