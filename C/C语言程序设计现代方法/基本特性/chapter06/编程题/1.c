#include <stdio.h>

int main(void)
{
    float max, num;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if(max < num){
            max = num;
        }
        if(num <= 0){
            break;
        }
    }
    printf("The largest number entered was %.2f",max);
}