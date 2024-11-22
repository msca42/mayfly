#include <stdio.h>

int main(void)
{
    int income,salary;
    printf("please input income: ");
    scanf("%d",&income);

    if (income < 750){
        salary = income * 0.01;
    } else if(income < 2250){
        salary = 7.5 + (income - 750) * 0.02;
    } else if(income < 3750){
        salary = 37.50 + (income-2250) * 0.03;
    } else if(income < 5250){
        salary = 82.50 + (income - 3750) * 0.04;
    } else if(income < 7000){
        salary = 142.50 + (income - 5250) * 0.05;
    } else {
        salary = 230.00 + (income - 7000) * 0.06;
    }
}