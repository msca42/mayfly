#include <stdio.h>

int main(void)
{
  int x;
  printf("Enter a dollar amount:");
  scanf("%d",&x);
  int number_20 = x /20;
  printf("$20 bills: %d\n",number_20);
  int number_10 = (x - number_20 * 20) /10;
  printf("$10 bills: %d\n",number_10);
  int number_5 = (x - number_20 * 20 - number_10 * 10) /5;
  printf("$5 bills: %d\n",number_5);
  int number_1 = (x - number_20 * 20 - number_10 * 10 - number_5 * 5) ;
  printf("$1 bills: %d\n",number_1);
  return 0;
}