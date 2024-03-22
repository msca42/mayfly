/* Computes a Universal Product Code check digit */

#include <stdio.h>

int main(void)
{
  int  i1, i3, i5, i7, i9, i11, j2, j4, j6, j8,j10,j12,first_sum, second_sum, total;

  printf("Enter eleven number: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&j2,&i3,&j4,&i5,&j6,&i7,&j8,&i9,&j10,&i11,&j12);

  first_sum = j2 + j4 + j6 + j8 + j10+j12;
  second_sum =  i1 + i3 + i5 + i7 + i9+i11;
  
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9-((total -1) % 10));

  return 0;
}