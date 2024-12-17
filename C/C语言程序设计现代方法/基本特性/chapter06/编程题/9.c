#include <stdio.h>

int main(void)
{
    // 声明
    float loan, rate, mpayment, times, mrate, remain;

    // 提示输入
    printf("Enter amount of loan : ");
    scanf("%f", &loan);
    printf("Enter interest rate : ");
    scanf("%f", &rate);
    printf("Enter monthly payment :");
    scanf("%f", &mpayment);
    printf("Enter payment month : ");
    scanf("%f", &times);

    // 初始化
    mrate = rate / 1200;
    remain = loan;
    for (int i = 0; i < times; i++)
    {
        remain = remain + remain * mrate - mpayment;
        printf("Balance remaining after %d payment: $%.2f\n", i + 1, remain);
    }

    return 0;
}

/*
  计算第一、二、三月还贷之后剩余的贷款金额
  核心理解计算公式
  每月剩余 =  当月贷款金额 + 当月贷款金额 x 月利率 - 每月还款金额
*/

/*
修改第二章编程题8
用户输入还贷次数并显示每次还贷后剩余的贷款余额
*/