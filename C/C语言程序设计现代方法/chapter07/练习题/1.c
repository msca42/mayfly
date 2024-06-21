#include <stdio.h>

int main(void)
{
  printf("%d\n", 077);   // 八进制 - 63
  printf("%d\n", 0x77);  // 十六进制 - 119
  printf("%d\n", 0XABC); // 十六进制- 2748
}