#include <stdio.h>

int main(void)
{
    // 声明
    int days, start;
    
    // 提示输入
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter starting day of teh week (1=Sun, 7= Sat): ");
    scanf("%d",&start);

    // 主逻辑
    // 打印空白 这里为什么是三个空格
    for(int i = 1; i < start; i++) {
        printf("   ");
    }
    for(int i = 1; i <= days; i++){
        // 3表示单个字符长度，也是空格的长度的依据来源
        printf("%3d",i);
        // 换行
        if((i + start - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
/*
显示单月的日历
第一日的时间，每七日一换行
*/