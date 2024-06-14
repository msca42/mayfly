#include <stdio.h>

int main(void)
{
  float i, j;
  int x;
  // 12.3 45.6 789
  scanf("%f%d%f", &i, &x, &j);
  // 12.3 45 0.6
  printf("%f%d%f", i, x, j);
}