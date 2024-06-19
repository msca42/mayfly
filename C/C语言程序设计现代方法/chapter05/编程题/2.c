#include <stdio.h>

int main(void)
{
  int hour = 0, minute = 0;
  printf("Enter a 24-hour time:");
  scanf("%d:%d", &hour, &minute);
  if (hour > 12 && hour <= 24)
    // %02d含义: d十进制，2位宽，0表示填充符，显示数字少于位宽使用0填充
    printf("Equivalent 12-hour time: %d:%02d PM", hour % 12, minute);
  else
    printf("Equivalent 12-hour time: %d:%02d PM", hour, minute);

  return 0;
}