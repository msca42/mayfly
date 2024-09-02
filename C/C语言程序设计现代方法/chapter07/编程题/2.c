/*
 * Name: 2.c 
 * Purpose:  修改square2.c 
 * Author: mayfly
 * Description:
 *  每24次平方运算后暂停，并显示下列信息
 *     Press Enter to continue...
 *  显示完上述信息后，程序应该使用getchar()函数读入一个字符
 *  getchar()函数读到用户输入的回车键才允许程序继续
 */
/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in tables: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    if(i % 24 == 0){
      printf("Press Enter to continue...");
      if(i == 24){
          getchar();
      }
      while (getchar() != '\n') ;
    }
    printf("%10d%10d\n", i, i * i);
  }

  return 0;
}
/* 
为什么i = 24的时候会在缓存区中存在一个回车键
  scanf("%d", &n);
*/