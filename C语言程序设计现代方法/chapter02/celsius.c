/* Converts a Fahrenheit temperature to Celsius */
#include <stdio.h>

#define FREEZING_PT 32.0f
// 如果两个整数相除，向下取整
#define SCALE_FACTOR (5.0f/9.0f)

int main(void)
{
  float fahrenheit, celsius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  
  printf("Celsius equivalent: %.1f\n",celsius);

  return 0;
}