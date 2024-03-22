#include <stdio.h>

int main(void)
{
  int i = 1;
  int j = 2;

  i += j;
  // 3 2
  printf("%d %d\n",i,j);
  i--;
  //2 2
  printf("%d %d\n",i,j);
  i * j / i ;
  // 2 2 
  printf("%d %d\n",i,j);
  i % ++j;
  // 2 3
  printf("%d %d\n",i,j);


}