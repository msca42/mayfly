/*
 * Name: 8.c
 * Purpose: 显示单月日历
 * Author: mayfly
 * Description:
 *  用户指定这个月的天数和该月起始日是星期几
 *  Enter number of days in month: 31
 *  Enter starting day of the week (1=Sun,7=Sat): 3
 *        1  2  3  4  5
 *  6  7  8  9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 */
#include <stdio.h>

int main(void)
{
  // 天数和起始日期
  int dayNumbers, startDay;
  
  printf("Enter number of days in month:");
  scanf("%d",&dayNumbers);
  printf("Enter starting day of the week (1=Sun,7=Sat):");
  scanf("%d",&startDay);

  int count = 0;
  // 输出
  for(int i = 1; i <= dayNumbers + startDay; i++)
  { 
    if(i <= startDay) {
      printf("    ");
    } else {
      printf("%4d",i - startDay);
    }

    if(count % 7 == 0){
      printf("\n");
    }
    

    if (i == dayNumbers+startDay) {
      printf("\n");
    }
    count++;
  }
}
/*
分析: 通过dayNumbers的循环可以打印1～dayNumbers的5行7列的日历
现在的问题是如何加上startDay,如何打印空格
*/



