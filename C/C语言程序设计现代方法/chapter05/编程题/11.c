/*
 * Name: 11.c
 * Purpose: 输入一个两位数，然后显示该数的英文单词
 * Author: mayfly
 * Description
 *  Enter a two-digit number: 45
 *  You entered the number forty-five.
 * 提示:
 *  将数分解为两个数字，用一个switch显示第一个数字对应单词，用第二个数字显示第二位数字对应的单词，不要忘了11～19的特殊处理
 */
#include <stdio.h>

int main(void)
{
  // 声明
  int first, second;

  // 输入
  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &first, &second);
  // printf("first = %d" , first);
  // printf("second = %d" , second);

  // 11~19  个例
  if (first == 1)
  {
    switch (second)
    {
    case 0:
      printf("You entered the number: ten\n");
      break;
    case 1:
      printf("You entered the number: eleven\n");
      break;
    case 2:
      printf("You entered the number: twelve\n");
      break;
    case 3:
      printf("You entered the number: thirteen\n");
      break;
    case 4:
      printf("You entered the number: fourteen\n");
      break;
    case 5:
      printf("You entered the number: fifteen\n");
      break;
    case 6:
      printf("You entered the number: sixteen\n");
      break;
    case 7:
      printf("You entered the number: seventeen\n");
      break;
    case 8:
      printf("You entered the number: eighteen\n");
      break;
    case 9:
      printf("You entered the number: nineteen\n");
      break;
    }
  }
  else
  {
    switch (first)
    {
    case 2:
       printf("You entered the number: twenty-");
      break;
    case 3:
       printf("You entered the number: thirty-");
      break;
    case 4:
       printf("You entered the number: forty-");
      break;
    case 5:
       printf("You entered the number: fifty-");
      break;
    case 6:
       printf("You entered the number: sixty-");
      break;
    case 7:
       printf("You entered the number: seventy-");
      break;
    case 8:
       printf("You entered the number: eighty-");
      break;
    case 9:
       printf("You entered the number: ninety-");
      break;
    }
    switch (second)
    {
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    case 3:
      printf("three\n");
      break;
    case 4:
      printf("four\n");
      break;
    case 5:
      printf("five\n");
      break;
    case 6:
      printf("six\n");
      break;
    case 7:
      printf("seven\n");
      break;
    case 8:
      printf("eight\n");
      break;
    case 9:
      printf("nine\n");
      break;
    }
  }
}
