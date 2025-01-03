/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
    // 声明
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,first_sum,second_sum,total;

    // 输入
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

    // 表达式
    first_sum = i2+ i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7  + i9 + i11;
    total = 3 *  first_sum + second_sum;

    // 输出
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
/*
输入13位的欧洲商品编码
*/
