/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    // 声明
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separted by a plus sign:");
    scanf("%d /%d +%d /%d", &num1,&denom1,&num2,&denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
/*  
修改addfrac.c  同时输入两个分数，中间用加号隔开
*/