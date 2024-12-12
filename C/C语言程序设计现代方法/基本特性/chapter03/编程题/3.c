#include <stdio.h>

int main(void)
{
    // 声明
    int GS1,Group,Publisher,Item,Check;
    
    // 输入
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d",&GS1,&Group,&Publisher,&Item,&Check);
    
    // 输出
    printf("GS1 prefix: %d\n",GS1);
    printf("Group identifier: %d\n", Group);
    printf("Publisher code: %d\n",Publisher);
    printf("Item number: %d\n",Item);
    printf("Check digit: %d\n",Check);
    return 0;
}

/*
编写一个程序来分解录入的ISBN信息
*/