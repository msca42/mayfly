#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    int number_digits;
    if (number >=0 && number <=9) {
        number_digits = 1;
    } else if(number < 100){
        number_digits = 2;
    } else if (number <1000){
        number_digits = 3;
    } else {
        number_digits = 4;
    }
    
    printf("The number %d has %d digits",number,number_digits);   
}