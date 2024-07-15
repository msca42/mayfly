/*
\b \x08
\n \x0A
\r \x0D
\t \x09
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