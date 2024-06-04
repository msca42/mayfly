#include <stdio.h>

int main(void)
{

  printf("Enter amount of loan: ");
  float amount;
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  float rate;
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  float payment;
  scanf("%f", &payment);

  float first_remain = (amount - payment) * (1 + rate / 100 / 12);
  float second_remain = (first_remain - payment) * (1 + rate / 100 / 12);
  float third_remain = (second_remain - payment) * (1 + rate / 100 / 12);
  printf("Balance remaining after first payment: $%.2f\n", first_remain);
  printf("Balance remaining after second payment: $%.2f\n", second_remain);
  printf("Balance remaining after third payment: $%.2f\n", third_remain);
}