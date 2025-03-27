#include <stdio.h>

int main(void)
{
    // int a,b,c;
    // float x,y,z;
    // printf("%d-%d-%d\n",a,b,c);
    // printf("%f-%f-%f\n",x,y,z);

    float f;
    int x, y;
    int z = x * y;
    printf("Uninitialize X = %d, Y = %d and Z = %d \n",x,y,z);
    printf("Uninitialize float f = %f \n",f);
    return 0;
}

/*
考察变量的值在未初始化时的默认赋值情况

*/