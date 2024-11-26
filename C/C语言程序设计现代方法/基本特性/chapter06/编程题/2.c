#include <stdio.h>

int main(void)
{
    int m,n;
    printf("Enter two integers: ");
    scanf("%d %d",&m,&n);

    while (n != 0)
    {
       int  temp = m % n;
       m = n;
       n = temp;
    }
    printf("Greatest common divisor: %d",m);
    return m;

  
    
}