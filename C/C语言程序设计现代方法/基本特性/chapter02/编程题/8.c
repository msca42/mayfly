#include <stdio.h>

int main(void)
{
    //声明
    float amountLoan,interestRate,monthlyPayMent;
    float firstLeftOver,secondLeftOver,thirdLeftOver;
    // 提示
    printf("Enter amount of loan: ");
    scanf("%f",&amountLoan);
    printf("Enter interest rate:");
    scanf("%f",&interestRate);
    printf("Enter monthly payment:");
    scanf("%f",&monthlyPayMent);

    // 计算逻辑
    firstLeftOver = (amountLoan - monthlyPayMent) + ( amountLoan * interestRate/(100*12));
    secondLeftOver = (firstLeftOver - monthlyPayMent) + (firstLeftOver * interestRate/(100*12));
    thirdLeftOver = (secondLeftOver - monthlyPayMent) + (secondLeftOver * interestRate/(100*12));

    //输出
    printf("Balance remaining after first payment: $%.2f\n",firstLeftOver);
    printf("Balance remaining after second payment: $%.2f\n",secondLeftOver);
    printf("Balance remaining after third payment: $%.2f\n",thirdLeftOver);


}