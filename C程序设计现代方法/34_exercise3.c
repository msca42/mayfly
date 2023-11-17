#include <stdio.h>

int main(void)
{
   int x;
  float y;
  //a scanf函数起始位置寻找忽略空白，所以等价
  // scanf("%d",&x);
  // scanf("  %d",&x);


  //b  
  // scanf("%d-%d-%d",&x,&x,&x);
  // scanf("%d -%d -%d",&x,&x,&x);
  //c
  // scanf("%f",&y);
  // scanf("%f ",&y);
  //d
  scanf("%f,%f",&y,&y);
  scanf("%f, %f",&y,&y);

  return 0;
}