#include <stdio.h>

int main(void)
{
  
  int x;
  int final_num;

  printf("请输入x的值: ");
  scanf("%d",&x);
  final_num = ((((3 * x  + 2) * x -5) * x -1) * x  + 7) * x -6;
  printf("多项式的值是:%d\n", final_num);
}