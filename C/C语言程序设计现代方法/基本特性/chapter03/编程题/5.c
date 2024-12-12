#include <stdio.h>

int main(void)
{
   // 声明
   int num1,num2,num3,num4,num5,num6,num7,num8,
    num9,num10,num11,num12,num13,num14,num15,num16;

    // 输入
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,
        &num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);
}
/*
用户输入从1到16的所有整数，然后用4x4矩阵显示，再计算每行、每列和每条对角线上的和
*/