#include <stdio.h>

int main(void)
{
    // int number;
    // printf("Enter a number: ");
    // scanf("%d",&number);
    // int number_digits;
    // if (number >=0 && number <=9) {
    //     number_digits = 1;
    // } else if(number < 100){
    //     number_digits = 2;
    // } else if (number <1000){
    //     number_digits = 3;
    // } else {
    //     number_digits = 4;
    // }
    
    // printf("The number %d has %d digits",number,number_digits);   
    // 声明
    int digit = 0;
    
    // 输入
    printf("Enter a number: ");
    scanf("%d",&digit);

    // 核心逻辑
    if(digit>=0 && digit<=9){ // 判断是否一位数
        printf("The number %d has 1 digits",digit);
    } else if (digit>=10 && digit<=99){ // 判断是否两位数
        printf("The number %d has 2 digits",digit);
    } else if (digit>=100 && digit<=999){ // 判断是否三位数
        printf("The number %d has 3 digits",digit);
    } else { // 判断是否四位数
        printf("The number %d has 4 digits",digit);
    }

    return 0;
}
/*
确定一个数的位数
考察选择结构，解决的关键在于划定选择区间
*/