#include <stdio.h>

int main(void)
{
  printf("Enter a dollar amount: ");
  int dollar_number;
  scanf("%d", &dollar_number);
  int number_20 = dollar_number / 20;
  int number_10 = (dollar_number - number_20 * 20) / 10;
  int number_5 = (dollar_number - number_20 * 20 - number_10 * 10) / 5;
  int number_1 = (dollar_number - number_20 * 20 - number_10 * 10 - number_5 * 5);
  printf("$20 bills: %d\n", number_20);
  printf("$10 bills: %d\n", number_10);
  printf("$5 bills: %d\n", number_5);
  printf("$1 bills: %d\n", number_1);
}