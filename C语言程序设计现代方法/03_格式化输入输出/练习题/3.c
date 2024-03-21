#include <stdio.h>

int main(void)
{
  int x;
  float y;

  scanf("%d",&x);
  scanf(" %d",&x);

  scanf("%d-%d-%d\n",&x,&x,&x);
  scanf("%d -%d -%d\n",&x,&x,&x);

  scanf("%f\n",&y);
  scanf("%f \n",&y);
  scanf("%f,%f\n",&y,&y);
  scanf("%f, %f\n",&y,&y);

}