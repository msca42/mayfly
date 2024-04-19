#include <stdio.h>

int main(void)
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
  int row_1,row_2,row_3,row_4;
  int column_1,column_2,column_3,column_4;
  int diagonal_1,diagonal_2;
  
  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
  printf("%d %d %d %d\n",a,b,c,d);
  printf("%d %d %d %d\n",e,f,g,h);
  printf("%d %d %d %d\n",i,j,k,l);
  printf("%d %d %d %d\n",m,n,o,p);

  row_1 = a + b + c + d;
  row_2 = e + f + g + h;
  row_3 = i + j + k + l;
  row_4 = m + n + o + p;

  column_1 = a + e + i + m;
  column_2 = b + f + j + n ;
  column_3 = c + g + k + o;
  column_4 = d + h + l + p;

  diagonal_1 = a + f + k +p;
  diagonal_2 = d + g + j + m;


  printf("Row sums: %d %d %d %d\n", row_1,row_2,row_3,row_4);
  printf("Column sums: %d %d %d %d\n", column_1,column_2,column_3,column_4);
  printf("Diagonal sum: %d %d\n", diagonal_1,diagonal_2);
}