#include <stdio.h>

int main(void)
{
    // 声明收入和税金
    float income, tax;
    
    // 输入
    printf("please input income: ");
    scanf("%d",&income);

    if (income <= 750.0f){
        tax = income * 0.01;
    } else if(income < 2250.0f){
        tax = 7.5 + (income - 750) * 0.02;
    } else if(income < 3750.0f){
        tax = 37.50 + (income-2250) * 0.03;
    } else if(income < 5250.0f){
        tax = 82.50 + (income - 3750) * 0.04;
    } else if(income <= 7000.0f){
        tax = 142.50 + (income - 5250) * 0.05;
    } else {
        tax = 230.00 + (income - 7000) * 0.06;
    }

    // 输出税金
    printf("The Tax is %.2f",tax);

    return 0;
}

/*
用户输入需纳税的收入，显示税金
*/