/* Prints a table of squares using a for statement */

#include <stdio.h>

int main()
{
    int i, n;
    int count = 0;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    // 当使用scanf("%d", &n);读取用户输入的整数n时，用户输入完整数后按下回车键，这个回车键产生的换行符会留在输入缓冲区中
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        count++;

        if (count % 24 == 0){
           
            printf("Press Enter to continue...\n");
            /* 
            我需要一个暂停并且输入，知道输入的数据为换行，继续循环;
            问题: 跳过getchar()继续输出内容
             分析: 在内存中存在换行符可以被识别
             - 如何将内存中的换行符剔除
            */
            while (getchar() != '\n');    
            // getchar(); 
        }
    }

    return 0;
}