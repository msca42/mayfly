#include <stdio.h>

int main(void)
{
    float amount_loan, interest_rate,monthly_payment;
    float payment;
    int count;
    printf("Enter amount of loan: ");
    scanf("%f",&amount_loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);

    printf("Enter the number of pay: ");
    scanf("%d",&count);

    while (count)
    {
        payment = amount_loan - monthly_payment + amount_loan * interest_rate / 100 / 12;
        amount_loan = payment;
        count--;
    } 
    printf("Balance remaining after %d payment: %f\n",count, payment);

}