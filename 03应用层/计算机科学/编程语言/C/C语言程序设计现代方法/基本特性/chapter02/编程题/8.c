#include <stdio.h>

int main(void)
{

    // 声明
    float loan, rate,mpayment;
    float first_payment,second_payment,third_payment;

    // 提示输入
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&mpayment);

    // 核心逻辑
    first_payment = loan - mpayment + loan * rate / 100 / 12;
    second_payment = (first_payment - mpayment)  + first_payment * rate / 100 / 12;
    third_payment = (second_payment - mpayment)  + second_payment * rate / 100 / 12;

    // 输出
    printf("Balance remaining after first payment: %f\n", first_payment);
    printf("Balance remaining after second payment: %f\n", second_payment);
    printf("Balance remaining after third payment: %f\n", third_payment);

    return 0;
}
/*
  计算第一、二、三月还贷之后剩余的贷款金额
  核心理解计算公式
  每月剩余 =  当月贷款金额 + 当月贷款金额 x 月利率 - 每月还款金额
*/

/*
综述: 本章的编程题都是考察的 声明、输入赋值初始化、输出
*/