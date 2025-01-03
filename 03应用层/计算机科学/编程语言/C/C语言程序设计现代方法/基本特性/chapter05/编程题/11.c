#include <stdio.h>

int main(void)
{
    // 声明
    int number;
    int one_digit, two_digit;
    
    // 输入
    printf("Enter a two-digit number:");
    scanf("%d", &number);

    // 独立判断
    printf("You enter the number:");
    if(number >= 20 || number <= 10) {
        two_digit = number / 10;
        one_digit = number % 10;
        switch (two_digit)
        {
        case 9:
            printf("Ninety-");
            break;
        case 8:
            printf("Eighty-");
            break;
        case 7:
            printf("Seventy-");
            break;
        case 6:
            printf("Sixty-");
            break;
        case 5:
            printf("Fifty-");
            break;
        case 4:
            printf("Forty-");
            break;
        case 3:
            printf("Thirty-");
            break;
        case 2:
            printf("Twenty-");
            break;
        default:
            printf("......");
        } 
        switch (one_digit)
        {
        case 9:
            printf("nine");
            break;
        case 8:
            printf("eight");
            break;
        case 7:
            printf("seven");
            break;
        case 6:
            printf("six");
            break;
        case 5:
            printf("five");
            break;
        case 4:
            printf("four");
            break;
        case 3:
            printf("three");
            break;
        case 2:
            printf("two");
            break;
        case 1:
            printf("one");
            break;
        
        default:
            printf("......");
        }
    } else {
        switch (number)
        {
        case 10:
            printf("Ten");
            break;
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;
        }
    }

    return 0;
}


/*
输入一个两位数，显示英文单词
*/