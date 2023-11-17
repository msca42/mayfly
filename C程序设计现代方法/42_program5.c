#include <stdio.h>

// 没有按任意顺序输入
int main(void)
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
  int row_result1, row_result2,row_result3,row_result4;
  int col_result1,col_result2,col_result3,col_result4;
  int dia_result1,dia_result2;
  printf("Enter the numbers from 1 to 16 in any order:");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
  printf("%d\t%d\t%d\t%d\n",p,c,b,m);
  printf("%d\t%d\t%d\t%d\n",e,j,k,h);
  printf("%d\t%d\t%d\t%d\n",i,f,g,l);
  printf("%d\t%d\t%d\t%d\n",d,o,n,a);
  row_result1 = p + c + b + m;
  row_result2 = e + j + k + h;
  row_result3 = i + f + g + l;
  row_result4 = d + o + n + a;
  col_result1 = p + e + i + d;
  col_result2 = c + j + f + o;
  col_result3 = b + k + g + n;
  col_result4 = m + h + l + a;
  dia_result1 = p + j + g + a;
  dia_result2 = m + k + f + d;
  printf("Row sums:%d\t%d\t%d\t%d\n",row_result1,row_result2,row_result3,row_result4);
  printf("Column sums:%d\t%d\t%d\t%d\n",col_result1,col_result2,col_result3,col_result4);
  printf("Diagonal sums:%d\t%d\n",dia_result1,dia_result2);
  return 0;
}