/* scanf的匹配机制 */
#include <stdio.h>

int main(void)
{
  int i, j;
  float x;
  // 10.3 5 6
  scanf("%d%f%d", &i, &x, &j);
  // 10 0.3 5
  printf("%d%f%d", i, x, j);
}