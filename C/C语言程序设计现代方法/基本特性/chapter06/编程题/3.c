#include <stdio.h>

int main(void)
{
    int m,n,num1,num2;
    printf("Enter a fraction: ");
    scanf("%d/%d",&m,&n);
    num1 = m;
    num2 = n;
    while (n != 0)
    {
       int  temp = m % n;
       m = n;
       n = temp;
    }
    printf("In lower terms: %d/%d",num1/m,num2/m);

}