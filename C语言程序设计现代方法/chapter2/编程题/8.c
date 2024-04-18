#include <stdio.h>

int main(void)
{
    float amount_loan,interest_rate,monthly_payment;
    float first,second,third;

    printf("Enter amount of loan: ");
    scanf("%f",&amount_loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);

    first = (amount_loan- monthly_payment) * (1 + interest_rate / 100 / 12 );
    second = (first- monthly_payment) * (1 + interest_rate / 100 / 12 );
    third = (second - monthly_payment) * (1 + interest_rate / 100 / 12 );

    printf("Balance remaining after first payment: $%.2f\n",first);
    printf("Balance remaining after second payment: $%.2f\n",second);
    printf("Balance remaining after third payment: $%.2f\n",third);

}