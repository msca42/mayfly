/*
 * Name: 4.c
 * Purpose:  修改reverse.c
 * Author: mayfly
 * Description:
 *  利用表达式(int)(sizeof(a)/sizeof(a[0])) 计算数组的长度
 */
/* Reverses a series of numbers */
#include <stdio.h>

#define N 10

int main(void)
{
  int a[N], i;
  int length;

  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("In reverse order:");
  for (i = N - 1; i >= 0; i--)
  {
    printf(" %d", a[i]);
  }
  printf("\n");

  length = (int)(sizeof(a)/ sizeof(a[0]));
  printf("数组长度是: %d",length);
  

  return 0;
}