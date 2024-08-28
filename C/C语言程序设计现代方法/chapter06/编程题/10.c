/*
 * Name: 10.c
 * Purpose: 修改第五章的编程题9
 * Author: mayfly
 * Description:
 *  要求用户输入任意个日期，用0/0/0结束，判断哪个日期更早
 *  Enter a date (mm/dd/yy): 3/6/08
 *  Enter a date (mm/dd/yy): 5/17/07
 *  Enter a date (mm/dd/yy): 6/3/07
 *  Enter a date (mm/dd/yy): 0/0/0
 *  5/17/07 is the earliest date
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int month,day,year;
  int minMonth = 13,minDay= 32 ,minYear = 100;
  _Bool flag = true;

  while (flag)
  {
    // 输入日期
    printf(" Enter a date (mm/dd/yy):");
    scanf("%d/%d/%02d",&month,&day,&year);

    // 中断条件
    if(month == 0 && day == 0 && year == 0){
      break;
    }

    // 比较日期
    if(year < minYear || (year == minYear && month < minMonth) || (year == minYear && month == minMonth && day < minDay) ) {
      minYear = year;
      minMonth= month;
      minDay = day;
    }
    
  }
  printf("%d/%d/%02d is the earliest date\n",minMonth,minDay,minYear);

}