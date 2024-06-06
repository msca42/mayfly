#include <stdio.h>

int main(void)
{
  // if ((getchar() != EOF) == 0)
  //   printf("result is 0\n");
  // else if ((getchar() != EOF) == 1)
  //   printf("result is 1\n");
  // else
  //   printf("result is not 0 or 1\n");

  int c;
  while (c = (getchar() != EOF))
  {
    printf("%d\n", c);
  }
  printf("%d - at EOF\n", c);
}