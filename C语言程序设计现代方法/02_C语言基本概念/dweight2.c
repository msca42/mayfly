/* Computes the dimensional weight of a box from input provided by th user*/

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  // 标准输入函数
  scanf("%d",&height);
  printf("Enter length of box: ");
  scanf("%d",&length);
  printf("Enter width of box: ");
  scanf("%d",&width);
  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight  (pounds): %d\n", weight);

  return 0;
  
}