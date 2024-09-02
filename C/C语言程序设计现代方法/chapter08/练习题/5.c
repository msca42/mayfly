/*
 * Name: 5.c 
 * Purpose:  斐波那契数列
 * Author: mayfly
 * Description: 编写一个40位的斐波那契数列数组fib_number
 */
#include <stdio.h>

int main(void)
{
    int fib_number[40] = {[0]=0,[1]=1};
    for (int i = 2; i < 40; i++)
    {
        fib_number[i] = fib_number[i-1] + fib_number[i-2];
    }

     for (int i = 0; i < 40; i++)
     {
        printf("%d ",fib_number[i]);
     }
    
}