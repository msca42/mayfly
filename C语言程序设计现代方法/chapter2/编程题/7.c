#include <stdio.h>

int main(void)
{
  int dollar;
  int number_20;
  int number_10;
  int number_5;
  int number_1;

  printf("Enter a dollar amount: ");
  scanf("%d",&dollar);

  number_20 = dollar / 20;
  number_10 = (dollar - 20 * number_20) / 10;
  number_5 = dollar % 10 / 5;
  number_1 =  dollar % 5;

  printf("$20 bills: %d\n",number_20);
  printf("$10 bills: %d\n", number_10);
  printf("$50 bills: %d\n", number_5);
  printf("$10 bills: %d\n", number_1);
}