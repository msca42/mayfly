/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in tables: ");
  scanf("%d", &n);
  // scanf读取数字之后，在缓存区留下了一个\n的换行符，需要清空换行符
  getchar();
  // 清空缓存区
  for (i = 1; i <= n; i++)
  {
    printf("%d,%d\n", i, i * i);
    if (i % 24 == 0){
      printf("Press Enter to continue...");
      getchar();
    }
  }

  return 0;
}