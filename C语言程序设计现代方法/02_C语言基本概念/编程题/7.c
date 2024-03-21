#include <stdio.h>

int main(void)
{
  int dollar_num;
  int num_20;
  int num_10;
  int num_5;
  int num_1;

  printf("Enter a dollar amount: ");
  scanf("%d",&dollar_num);
  
  num_20 = dollar_num / 20;
  dollar_num = dollar_num - 20 * num_20;
  num_10 = dollar_num / 10;
  dollar_num = dollar_num - 10 * num_10;
  num_5 = dollar_num / 5;
  dollar_num = dollar_num - 5 * num_5;
  num_1  = dollar_num;


  printf("$20 bills: %d\n",num_20);
  printf("$10 bills: %d\n",num_10);
  printf("$5 bills: %d\n",num_5);
  printf("$1 bills: %d\n",num_1);

}