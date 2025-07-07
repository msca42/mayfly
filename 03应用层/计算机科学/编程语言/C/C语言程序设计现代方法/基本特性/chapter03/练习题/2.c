#include <stdio.h>

int main(void)
{
    float x;
    printf("%-8.1e\n",x);
    printf("%10.6e\n",x);
    printf("%-8.3f\n",x);
    printf("%#6.f",x);
}
/*
指数形式e
定点十进制f
栏宽m
-表示左对齐
根据不同X，p的表现不同
*/