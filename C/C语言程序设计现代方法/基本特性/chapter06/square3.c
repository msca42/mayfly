/* Prints a table of squares using an odd method */

#include <stdio.h>

int main()
{
    // 声明
    int i, n, odd, square;

    // 输入
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // 初始化与循环
    i = 1;
    odd = 3;
    for(square = 1; i <= n; odd += 2){
        printf("%10d%10d\n",i, square);
        ++i;
        square += odd;
    }


    return 0;
}
/*
体现for循环的灵活性
*/