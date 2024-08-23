/*
 * Name: 4.c 
 * Purpose: 提示用户以(xxx)xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxxx格式显示
 * Author: mayfly
 * Description: 
 *  Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 *  You entered 404.817.6900
 */

#include <stdio.h>

int main(void)
{
  //声明
  int number1,number2,number3;
  //输入
  printf("Enter phone number [(xxx) xxx-xxxx]:");
  scanf("(%d) %d-%d",&number1,&number2,&number3);

  //输出
  printf("You entered %d.%d.%d\n",number1,number2,number3);
}

