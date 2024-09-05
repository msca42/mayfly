/*
 * Name: 10.c
 * Purpose:  修改第五章的编程题8
 * Author: mayfly
 * Description:
 *  用一个数组存储航班起飞时间，用另一个数组存储航班抵达时间
 *  时间用整数表示，表示从午夜开始的分钟数
 *  程序用一个循环搜索起飞时间数组，以找到与用于输入的时间最接近的起飞时间
 */
/*
 * Name: 8.c
 * Purpose: 用户输入一个时间(24小时的时分表示)，程序选择起飞时间语用户输入最接近的航班，显示出相应的起飞时间和抵达时间
 * Author: mayfly
 * Description
 *  Enter a 24-hour time： 13:15
 *  Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 * 把输入用从午夜开始的分钟数表示
 *  起飞时间:
 *    8:00、9:43、11:19、12:47、2：00、3:45、7:00、9:45
 *    10:16 11:52 1:31 3:00  4:08 5:55 9:20 11:58
 */
#include <stdio.h>

int main(void)
{


  // 声明
  int  flyStart[8] = {480,583,679,767,840,945,1140,1305};
  int  flyEnd[8] = {};
  int hour, minute;
  int total_minutes;
  // 输入
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
  // 主逻辑
  total_minutes = hour * 60 + minute;
  // 显示
  if (total_minutes < (8 * 60 + 9 * 60 + 43) / 2)
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
  else if (total_minutes < (9 * 60 + 43 + 11 * 60 + 19) / 2)
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  else if (total_minutes < (11 * 60 + 19 + 12 * 60 + 47) / 2)
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  else if (total_minutes < (12 * 60 + 47 + 14 * 60) / 2)
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 a.m.\n");
  else if (total_minutes < (14 * 60 + 15 * 60 + 45) / 2)
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  else if (total_minutes < (15 * 60 + 45 + 19 * 60) / 2)
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  else if (total_minutes < (19 * 60 + 21 * 60 + 45) / 2)
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  else
    printf("Closest departure time is 9:45 p.m., arriving at 11.58 p.m.\n");
}