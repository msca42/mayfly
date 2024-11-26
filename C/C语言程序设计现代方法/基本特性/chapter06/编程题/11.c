#include <stdio.h>

int main(void)
{
    int number;
    float e = 1, sum;
    printf("please input number: ");
    scanf("%d",& number);
    for(int i = 1; i <= number; i++){
        sum *=i;
        e += 1/sum;
    }
    printf("%f",e);
}