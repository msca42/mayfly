/*
Print格式串
注意事项: 单数字的表示
*/
#include <stdio.h>

int main(void)
{
  int day, month, year;
  printf("Enter a date (mm/dd/yyyy):");
  // 可以匹配空格
  scanf("%d /%d /%d", &month, &day, &year);
  // 02中0表示字符宽度不足用0填充
  printf("You entered the date %4d%02d%02d\n", year, month, day);
  return 0;
}