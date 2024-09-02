/*
 * Name: 14.c 
 * Purpose:  判断是否可以获取小数部分
 * Author: mayfly
 * Description: 
 *   frac_part =  f - (int)f
 */
#include <stdio.h>

int main(void)
{
    float frac_part;
    float f = 3.14f;

    frac_part = f - (int)f;
    printf("%f\n",frac_part);
}

