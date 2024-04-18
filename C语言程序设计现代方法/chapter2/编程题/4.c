#include <stdio.h>

int main(void)
{
  float number;

  printf("Enter an amount: ");
  scanf("%f",&number);
  printf("With tax added: $%.2f\n",(number)* (1 + 0.05));
}