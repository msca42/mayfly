/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
   short int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in tables: ");
  scanf("%hd", &n);

  for (i = 1; i <= n; i++)
  {
    printf("%10d%10d\n", i, i * i);
  }

  return 0;
}