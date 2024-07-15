/*
\b \010
\n \012
\r \015
\t \011

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