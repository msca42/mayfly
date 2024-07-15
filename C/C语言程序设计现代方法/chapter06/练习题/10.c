#include <stdio.h>

int main(void)
{

  int i = 2;
  printf("i = %d", i);
  for(i = 0; i < 10; i++)
    if(i % 2) 
      goto end;
  
  end:
  printf("i = %d", i);


}