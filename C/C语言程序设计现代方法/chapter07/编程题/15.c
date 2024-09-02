/*
 * Name: 15.c 
 * Purpose:  编程计算正整数的阶乘
 * Author: mayfly
 * Description: 
 *  Enter a positive integer: 6
 * Factorial of 6: 720
 */
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n = 1;
    int max_n;
    short fact = 1;
    // printf("Enter a positive integer: ");
    // scanf("%d",&n);
    int count = 1;
    while (fact <= SHRT_MAX && n <= INT_MAX && n >=1)
    {
        fact *= n;
        n++;
        printf("%d: %d",count,n);
        count++;
    }
    max_n = n;
    printf("Factorial of %d: %d\n",max_n, fact);

    
}
/* 
感觉是边界问题，在其他编程语言中会自动限制，在C语言中需要程序猿手动限制
*/