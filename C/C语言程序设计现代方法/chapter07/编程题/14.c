/*
 * Name: 14.c 
 * Purpose:  用牛顿方法计算正浮点数平方根
 * Author: mayfly
 * Description: 
 *  Enter a positive number: 3
 *  Square root: 1.73205
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(void)
{
    double x,y;
    double z; // x/y
    double average; // y和x/y的平均值
    _Bool flag = true;
    
    y = 1;
    printf("Enter a positive number: ");
    scanf("%lf",&x);

    while (flag)
    {
        z = x / y;
        average = (z + y) / 2;
        if(fabs(y - average) < 0.00001 * y ){
            flag = false;
        }
        y = average;
    }
    printf("Square root: %lf\n",y);
    
}