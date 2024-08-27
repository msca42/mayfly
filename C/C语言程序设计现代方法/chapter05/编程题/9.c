/*
 * Name: 9.c
 * Purpose: 用户输入两个日期，然后显示哪一个日期更早
 * Author: mayfly
 * Description
 *  Enter first date (mm/dd/yy): 3/6/08
 *  Enter second date (mm/dd/yy): 5/17/07
 *  5/17/07 is earlier than 3/6/08
 */
#include <stdio.h>

int main(void)
{
  int month1,day1,year1;
  int month2,day2,year2;

  printf("Enter first date (mm/dd/yy):");
  scanf("%d/%d/%02d",&month1,&day1,&year1);

  printf("Enter second date (mm/dd/yy):");
  scanf("%d/%d/%02d",&month2,&day2,&year2);

  // 主逻辑
  if(year1 < year2){
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month1,day1,year1,month2,day2,year2);
  } else if (year1 > year2){
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month2,day2,year2,month1,day1,year1);
  } else {
    if (month1 < month2) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month1,day1,year1,month2,day2,year2);
    } else if (month1 > month2) {
    printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month2,day2,year2,month1,day1,year1);
    } else {
      if (day1 < day2) {
      printf("%d/%d/%02d is earlier than %d/%d/%02d",month1,day1,year1,month2,day2,year2);        
      } else {
      printf("%d/%d/%02d is earlier than %d/%d/%02d",month2,day2,year2,month1,day1,year1);
      }
    }
  }


}