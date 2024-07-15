/*
-3
7
6.5
3.75
-1 
6
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

    //a 
    printf("%d\n", c * i);
    // b
    printf("%ld\n",s + m);
    //c 
    printf("%f\n", f / c);
    //d 
    printf("%lf\n",d /s);
    // e
    printf("%lf\n", f-d);
    // f
    printf("%d\n",(int)f);
}