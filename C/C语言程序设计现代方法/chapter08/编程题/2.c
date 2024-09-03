/*
 * Name: 2.c 
 * Purpose:  修改repdigit.c 
 * Author: mayfly
 * Description: 
 *  使其打印出一份列表，显示出每个数字在数中出现的次数
 *  Enter a number: 41271092
 *  Digit:          0 1 2  3 4 5 6 7 8 9 
 *  Occurrences:    1  2 2 0 1 0 0 1 0 1
 */
/* Checks numbers for repeated digits */


#include <stdio.h>

int main(void)
{
  int digit_seen[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit = n % 10;
    digit_seen[digit] += 1;
    n /= 10;
  }

  printf("Digit:\t\t");
  for (int i = 0;i< 10; i++)
  {
    printf("%4d",i);
  }
  printf("\n");

  printf("Occurrences:\t");
  for(int i = 0; i < 10; i++)
  {
    printf("%4d",digit_seen[i]);
  }
  printf("\n");
}