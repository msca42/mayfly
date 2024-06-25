/* m前置0 printf格式串 */
#include <stdio.h>

int main(void)
{
  int first, second, third;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &first, &second, &third);
  // 修复多位数首位位0的bug
  printf("You entered %03d.%03d.%04d\n", first, second, third);
  return 0;
}