/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    // 声明
    int d, i1, i2, i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total,check;


    // 输入
    printf("Enter the first (single) digit: ");
    scanf("%1d",&d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
    printf("please input UPC");
    scanf("%d",&check);

    // 计算表达式
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 *  first_sum + second_sum;

    // 验证结果并输出
  
    if(check == 9 - ((total - 1) % 10)){
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}

/* 
修改upc.c 
检测UPC有效性

*/