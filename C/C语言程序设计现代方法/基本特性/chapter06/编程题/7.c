/* Prints a table of squares using an odd method */

#include <stdio.h>

int main()
{
    // 声明
    int i, n;

    // 提示输入
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // 主循环
    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}

/*
修改square3.c
在for循环中初始化
*/