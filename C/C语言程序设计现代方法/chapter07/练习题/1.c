#include <stdio.h>

int main(void)
{
  printf("%d\n", 077);   // 八进制 - 63 = 7 * 8 ^ 0   + 7 * 8^ 1
  printf("%d\n", 0x77);  // 十六进制 - 119 = 7 * 16 ^ 0 + 7 * 16 ^ 1

  printf("%d\n", 0XABC); // 十六进制- 2748 = 10 * 16 ^ 2 + 11 *  16 ^ 1 + 12 * 16 ^ 0

}