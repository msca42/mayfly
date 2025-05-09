/*  Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    // 声明
    int i,n;

    // 输入
    printf("This programe prints a table of squares.\n");
    printf("Enter number of entries in table:  ");
    scanf("%d",&n);

    // while循环
    i = 1;
    while (i <= n)
    {
        // 显示平方
        printf("%10d%10d\n",i,i *i);
        i++;
    }

    return 0;
    
}