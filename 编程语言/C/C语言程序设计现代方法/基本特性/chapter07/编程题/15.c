#include <stdio.h>


int main(void)
{
    typedef short int T;
    T num;
    T temp;
    T result = 1;
    printf("Enter a positive integer: ");
    scanf("%hd",&num);
    temp  = num;
    while (num > 0)
    {
        result *= num;
        num--;
    }
    

    printf("Factorial of %hd: %hd",temp,result);
}