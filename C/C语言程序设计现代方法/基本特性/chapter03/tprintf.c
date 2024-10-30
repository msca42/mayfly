/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    int i;
    float x;
    
    i = 40;
    x = 839.21f;
    
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    // %d:40
    // %5d:   40
    // %-5d:40   |
    // %5.3d:  040
    printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);
    // %10.3f:   839.210
    // %10.3e: 8.392e+02
    // %-10g:  
}