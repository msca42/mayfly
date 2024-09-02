/*
 * Name: 13.c 
 * Purpose:  程序包含以下声明，给出以下表达式的值和类型
 * Author: mayfly
 * Description: 
 *   c * i;  s+m; f/c; d/s; f-d; (int)f
 */

#include <stdio.h>

int main(void)
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    // a 
    printf("%d\n", c * i); // int  -3
    // b 
    printf("%ld\n",s + m); // long  7
    // c
    printf("%f\n",f / c); // float 6.500000
    // d
    printf("%f\n",d / s); // double 3.750000
    // e
    printf("%f\n",f - d); // double -1.000000 
    //f
    printf("%d\n",(int)f); // int  6

}
