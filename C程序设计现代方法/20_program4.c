#include <stdio.h>

int main(void)
{
  float money;
  printf("Enter an amount:");
  scanf("%f",&money);
  printf("With tax added: $%.2f\n", (1+ 0.05f)* money);
  return 0;
}