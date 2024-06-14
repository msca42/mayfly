/*
  编译时可能会因为没有return int类型提示
  warning: non-void function does not return a value [-Wreturn-type]
*/
#include <stdio.h>

int main(void)
{
  printf("hello,world\n");
}