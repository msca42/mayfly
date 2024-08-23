/*
 * Name: 1.c 
 * Purpose: 以月日年的格式接受用户输入的日期信息，并以年月日的形式显示
 * Author: mayfly
 * Description: 
 *  格式 
 *    Enter a date (mm/dd/yyyy):2/17/2011 
 *    You entered the date 
 */

#include <stdio.h> // 目的: 为了拥有printf和scanf函数

int main(void)
{
  //声明
  int mm,dd,yyyy;
  //输入
  //提示语
  printf(" Enter a date (mm/dd/yyyy):");
  scanf("%2d /%2d /%4d",&mm,&dd,&yyyy);

  //输出
  printf("You entered the date %4d%02d%02d\n",yyyy,mm,dd);

  //返回值
  return 0;
}
/*
Q&A
Q1: 如果在输出中缺省0？
A1: 在字符宽度之前补充缺省字符 
*/


