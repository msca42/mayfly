#include <stdio.h>

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("fahr\tcelsius\n");
  celsius = lower;
  while (celsius <= upper)
  {
    fahr = (celsius * 9.0) / 5.0 + 32.0;
    printf("%4.0f\t%7.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}