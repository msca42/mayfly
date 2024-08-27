/*
 * Name: 10.c
 * Purpose: 利用switch编写一个程序，把用数字表示的成绩转换为字母表示的等级
 * Author: mayfly
 * Description
 *  Enter numerical grade: 84
 *  Letter grade: B
 * 提示: 
 *  A 90~100、B 80～90、C 70~79、D 60~69、F 0~58
 *  如果高于100或低于0，报错
 */
#include <stdio.h>

int main(void)
{
  int score;

  printf("Enter numerical grade: ");
  scanf("%d", &score);

  if(score < 0 || score > 100){
    printf("Error");
  } 
  switch (score/10)
  {
  case 10:
  case 9:
    printf("Letter grade: A\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("Letter grade: E\n");
    break;
  }
}