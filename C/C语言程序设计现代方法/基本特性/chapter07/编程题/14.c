#include <stdio.h>
#include <math.h>

int main(void)
{
    double x; 
    double  y = 1; //  y = 1
    double temp_y = y; //  y = 1 tempy = 1
    printf("Enter a positive number: ");
    // 双精度浮点数要加l
    scanf("%lf",&x);  // x= 3 y = 1 tempy = 1
    double x_y = x / y; // x = 3 y =1  x/y = 3 tempy = 1
   
    double avarage = (x_y + y) / 2;  //   x = 3 y =1  x/y = 3 tempy = 1 average =  2
    y = avarage; //   x = 3 y = 2 x/y = 3 tempy = 1 average =  2 
    
    while (fabs(y - temp_y) > 0.00001)
    {
        temp_y  = y; //   x = 3 y = 2 x/y = 3 tempy = 2 average =  2 
        x_y = x / y; //   x = 3 y = 2 x/y = 1.5 tempy = 2 average =  2
        avarage = (x_y + y) / 2; //   x = 3 y = 2 x/y = 1.5 tempy = 2 average =  1.75
        y = avarage;  //   x = 3 y = 1.75 x/y = 1.5 tempy = 2 average =  1.75
    }
    
    printf("Square root: %f",y);
}