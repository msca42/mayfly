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
    
    // 显示用户输入
    printf("%2d %2d %2d %2d \n",num1,num2,num3,num4);
    printf("%2d %2d %2d %2d \n",num5,num6,num7,num8);
    printf("%2d %2d %2d %2d \n",num9,num10,num11,num12);
    printf("%2d %2d %2d %2d \n",num13,num14,num15,num16);

    // 计算并输出四行
    printf("Row sums: %d %d %d %d\n",
        (num1 + num2 + num3 + num4),(num5 + num6 + num7 + num8),(num9 + num10 + num11 + num12),(num13 + num14 + num15 + num16));
    // 计算并输出四列
    printf("Column sum: %d %d %d %d\n",
        (num1 + num5 + num9 + num13),(num2 + num6 + num10 + num14),(num3 + num7 + num11 + num15),(num4 + num8 + num12 + num16));
    // 计算并输出对角线
    printf("Diagonal sums: %d %d\n",(num1 + num6 + num11 + num16),(num4 + num7 + num10 + num13));

    return 0;
}
/*
用户输入从1到16的所有整数，然后用4x4矩阵显示，再计算每行、每列和每条对角线上的和
*/