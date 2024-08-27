/*
 * Name: 8.c 
 * Purpose: 简化下列if语句
 * Author: mayfly
 * Description:
 *    if(age >= 13)
 *      if (age <= 19)
 *         teenager = true;
 *      else
 *         teenager = false;
 *    else if (age < 13)
 *      teenager = false;
 */
/* 
分析:   false 13  true  19  false
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int age = 0;
  _Bool teenager;
  if (age>= 13 && age <= 19){
    teenager = true;
  } else {
    teenager = false;
  }
}