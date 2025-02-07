/* 将输入赋值到输出的程序，并且将其中制表符替换为\t,回退符替换为\b,反斜杠替换为\\*/
#include <stdio.h>

int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        if (c == '\t'){
            printf("\\t");
        } else if (c == '\b'){
            printf("\\b");
        } else if (c == '\\'){
            printf("\\\\");
        } else {
            putchar(c);
        }
        c = getchar();
    }
}

