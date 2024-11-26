#include <stdio.h>

int main(void)
{
    int number;
    float e = 1, sum,min_float;
    printf("please input number: ");
    scanf("%d",& number);
    printf("please input min float");
    scanf("%f",&min_float);

    int i = 1;
    while (1)
    {
        sum *= i;
        if(1/ sum < min_float ){
            break;
        }
        e += 1/sum;
        i++;
    }
    
    printf("%f",e);
}