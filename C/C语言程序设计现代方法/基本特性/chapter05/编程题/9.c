#include <stdio.h>

int main(void)
{
    // 声明
    int fm,fd,fy;
    int sm,sd,sy;
    
    // 输入
    printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d",&fm,&fd,&fy);

    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d",&sm,&sd,&sy);

    // 比较输出
    if(fy > sy ||( fy== sy && fm > sm) || (fy == sy && fm == sm && fd > sd)){
        printf("%d/%d/%02d is earlier than %d/%d/%02d",sm,sd,sy,fm,fd,fy);
    } else {
        printf("%d/%d/%02d is earlier than %d/%d/%02d",fm,fd,fy,sm,sd,sy);
    }
    
    return 0;
}

/*
输入两个日期，显示哪一个更早
*/