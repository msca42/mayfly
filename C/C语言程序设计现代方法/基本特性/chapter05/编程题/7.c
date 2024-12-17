#include <stdio.h>

int main(void)
{
    // 声明
    int num1,num2,num3,num4;
    int max1,max2,min1,min2;

    // 输入
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    
    // 计算 比较两次，两两比较
    if(num1 > num2) {
        max1 = num1;
        min1 = num2;
    } else {
        max1 = num2;
        min1 = num1;
    }

    if(num3 > num4) {
        max1 = num3;
        min1 = num4;
    } else {
        max1 = num4;
        min1 = num3;
    }


    // 输出
    printf("Largest: %d\n", max1>max2?max1:max2);
    printf("Samllest: %d\n", min1<min2?min1:min2);

    return 0;
}
/*
用户输入4个整数，找出最大数和最小数
*/