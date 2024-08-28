/*
 * Name: 6.c
 * Purpose: 输入一个数n，显示1～n中所有偶数的平方值
 * Author: mayfly
 * Description:
 *  输入100， 显示4、16、36、64、100
 */
#include <stdio.h>

int main(void)
{
  int n;

  printf("please input n: ");
  scanf("%d",&n);

  for(int i = 1; i * i <=n; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n",i*i);
    }
  }
}
