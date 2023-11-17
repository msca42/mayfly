#include <stdio.h>

int main(void)
{
  float money;
  float rate;
  float month_payment;
  float result1;
  float result2;
  float result3;

  printf("Enter amount of loan:");
  scanf("%f",&money);
  printf("Enter interest rate:");
  scanf("%f",&rate);
  printf("Enter monthly  payment:");
  scanf("%f",&month_payment);

  result1 = money * (1 + rate/100/12)-month_payment;
  result2 = result1 * (1 + rate/100/12)-month_payment;
  result3 = result2 * (1 + rate/100/12)-month_payment;

  printf("Balance remaining after first payment: $%.2f\n",result1);
  printf("Balance remaining after second payment: $%.2f\n",result2);
  printf("Balance remaining after third payment: $%.2f\n",result3);
 
}