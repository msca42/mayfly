/*
 * Name: 5.c
 * Purpose:  修改interest.c
 * Author: mayfly
 * Description:
 *  每月整合一次利息，不要改变程序的输出格式，余额仍按每年一次的时间间隔显示
 */
/*
分析: 每月整合一次需要展示什么内容
*/        

/* Prints a table of compound interest */

#include <stdio.h>

// value数组的长度，存储rate的多少
#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
// 初始金额
#define INITIAL_BALANCE 100.00

int main(void)
{
  int i, low_rate, num_years, year,month;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++)
  {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }

  printf("\n");

  for (year = 1; year <= num_years; year++)
  {
    printf("%3d    ", year);
    for (i = 0; i < NUM_RATES; i++)
    {
      for(int j = 0; j < 12; j++){
        value[i] += (low_rate + i) / 100.0/12 * value[i];
      }
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
  return 0;
}

