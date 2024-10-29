#include <stdio.h>

int main(void)
{
    int x;
    printf("请输入x的值:");
    scanf("%d",&x);
    printf("多项式的值是: %d\n", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
}