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
    int n;
    int max_n;
    long  fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    max_n = n;
    int count = 1;
    while (n>1)
    {
        fact *= n;
        n--;
    }
    printf("Factorial of %d: %ld\n",max_n, fact);

    
}
/* 
short  7的阶乘
int   16的阶乘
long  20的阶乘

*/