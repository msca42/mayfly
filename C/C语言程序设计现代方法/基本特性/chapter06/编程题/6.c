#include <stdio.h>

int main(void)
{
    int number;
    printf("please input number: ");
    scanf("%d",&number);
    int m  = 1;
    while (m * m <= number)
    {
        if(m % 2 == 0){
            printf("%d\n",m*m);
        }
        m++;
    }
    
    return 0;
}