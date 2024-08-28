/*
 * Name: 10.c 
 * Purpose: 使用等价的goto替换continue
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  for(int i = 0; i< 10; i++)
  {
    if(i % 2 == 0)
      continue;
    printf("%d\n",i);
  }

  
  for(int i = 0; i< 10; i++)
  {

    if(i % 2 == 0)
      goto Loop;
    printf("%d\n",i);
    Loop:
      ;
  }

}