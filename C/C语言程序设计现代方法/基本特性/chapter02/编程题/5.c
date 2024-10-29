#include <stdio.h>

int main(void)
{
    int x;
    printf("请输入x的值:");
    scanf("%d",&x);
    printf("多项式的值是: %d\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
}