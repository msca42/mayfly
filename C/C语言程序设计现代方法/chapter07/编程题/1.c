/* Prints a table of squares using a for statement */

#include <stdio.h>
#include <stdint.h>

int main(void)
{ 
  // 46340,2147395600
  // int i;
  // 181,32761
  //short int i;
  long int i;
  for(i = 0; (i * i) < INT64_MAX && (i * i >= 0); i++){
    printf("%ld,%ld\n",i, i * i);
  }
  printf("%ld",i);
}