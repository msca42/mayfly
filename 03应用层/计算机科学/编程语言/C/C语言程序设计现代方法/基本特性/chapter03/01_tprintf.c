/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}

/*
思路分析
    - %(符号位)m.pX 
    - X这里是由d和f两种
    - d     
        - m要显示的字符
        - p要显示的最少数字，默认1
    - f
        - m要显示的字符
        - p小数点后显示的数字
    - e
        - m要显示的字符
        - p小数点后显示的数字
    - g
        - m要显示的字符
        - 不够大不够小，定点十进制
        - p可以显示有效数字的最大数量
|40|   40|40   |  040| 
|   839.210| 8.392e+02|839.21     |
*/