#include <stdio.h>

int main(void)
{
  float threshold;
  float factorial = 1.0;
  float e = 0.0;
  printf("Enter a number to calc e: ");
  scanf("%d", &threshold);
  for (int i = 1;; i++)
  {
    factorial = factorial * i;
    e = e + 1.0 / factorial;
    if (1.0 / factorial < threshold)
      break;
  }
  printf("The e = %1f\n", e);
  return 0;
}