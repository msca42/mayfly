#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
    int m,n,o,p;
    printf("Enter the number from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
    printf("%2d %2d %2d %2d\n",a,b,c,d);
    printf("%2d %2d %2d %2d\n",e,f,g,h);
    printf("%2d %2d %2d %2d\n",i,j,k,l);
    printf("%2d %2d %2d %2d\n",m,n,o,p);

    int row_sums_one = a + b + c + d; 
    int row_sums_two = e + f + g + h; 
    int row_sums_three = i + j + k + l; 
    int row_sums_four = m + n + o + p; 
    int column_sums_one = a + e + i + m;
    int column_sums_two = b + f + j + m;
    int column_sums_three = c + g + k + o;
    int column_sums_four = d + h + l + p;
    int diagonal_sums_one = a + f + k + p;
    int diagonal_sums_two = d + g + j + m;

    printf("Row sums: %d %d %d %d\n",row_sums_one,row_sums_two,row_sums_three,row_sums_four );
    printf("Column sums: %d %d %d %d\n",column_sums_one,column_sums_two,column_sums_three,column_sums_four);
    printf("Diagonal sums: %d %d\n",diagonal_sums_one,diagonal_sums_two);
}