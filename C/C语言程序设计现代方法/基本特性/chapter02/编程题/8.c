#include <stdio.h>

int main(void)
{
    float amount_loan, interest_rate,monthly_payment;
    float first_payment,second_payment,third_payment;
    printf("Enter amount of loan: ");
    scanf("%f",&amount_loan);
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthly_payment);

    first_payment = amount_loan - monthly_payment + amount_loan * interest_rate / 100 / 12;
    second_payment = (first_payment - monthly_payment)  + first_payment * interest_rate / 100 / 12;
    third_payment = (second_payment - monthly_payment)  + second_payment * interest_rate / 100 / 12;

    printf("Balance remaining after first payment: %f\n", first_payment);
    printf("Balance remaining after second payment: %f\n", second_payment);
    printf("Balance remaining after third payment: %f\n", third_payment);

}