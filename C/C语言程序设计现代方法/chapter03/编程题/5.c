/*
 * Name: 5.c 
 * Purpose:  用户按照任意次序输入1～16所有整数，然后用4x4矩阵显示，并计算每行、每列和每条对角线之和
 * Author: mayfly
 * Description: 
 *  Enter the number from 1 to 16 in any order:
 *   16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *   16  3  2 13
 *    5 10 11  8
 *    9  6  7 12
 *    4 15 14  1
 *  Row sums: 34 34 34 34
 *  Column sums: 34 34 34 34
 *  Diagonal sums: 34 34
 */

#include <stdio.h>

int  main(void)
{
  // 声明
  int a,b,c,d;
  int e,f,g,h;
  int i,j,k,l;
  int m,n,o,p;
  int rowSum1, rowSum2,rowSum3,rowSum4;
  int columnSum1,columnSum2,columnSum3,columnSum4;
  int diagonalSum1,diagonalSum2;
  // 输入
  printf("Enter the number from 1 to 16 in any order:");
  scanf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
  // 输出
  // 输出矩阵
  printf("%2d %2d %2d %2d\n",a,b,c,d);
  printf("%2d %2d %2d %2d\n",e,f,g,h);
  printf("%2d %2d %2d %2d\n",i,j,k,l);
  printf("%2d %2d %2d %2d\n",m,n,o,p);

  // 表达式
  // 行
  rowSum1 = a + b + c + d;
  rowSum2 = e + f + g + h;
  rowSum3 = i + j + k + l;
  rowSum4 = m + n + o + p;
  // 列
  columnSum1 = a + e + i + m;
  columnSum2 = b + f + j + n;
  columnSum3 = c + g + k + o;
  columnSum4 = d + h + l + p;
  // 对角
  diagonalSum1 = a + f + k + p;
  diagonalSum2 = d + g + j + m;


   
  // 输出行列对角线之和
  printf("Row sums: %d %d %d %d\n", rowSum1,rowSum2,rowSum3,rowSum4);
  printf("Column sums: %d %d %d %d\n", columnSum1,columnSum2,columnSum3,columnSum4);
  printf("Diagonal sums: %d %d\n", diagonalSum1,diagonalSum2);

}
