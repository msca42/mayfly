/*
 * Name: 2.c 
 * Purpose: 输入24小时制的时间，显示12小时制的格式
 * Author: mayfly
 * Description: 
 *  Enter a 24-hour time: 21:11
 *  Equivalent 12-hour time: 9:11 PM
 */
#include <stdio.h>

int main(void)
{
  // 声明
  int hour,minute;
  // 输入
  printf("Enter a 24-hour time:");
  scanf("%d:%d",&hour,&minute);
  // 逻辑
  if (hour <= 12) {
    hour = hour;
    printf("Equivalent 12-hour time: %d:%02d AM\n",hour,minute);
  } else {
    hour =  hour - 12;
    printf("Equivalent 12-hour time: %d:%02d PM\n",hour,minute);
  }
  // 输出
}