#include <stdio.h>

int main(void)
{
  int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen;
  int rowSumOne,rowSumTwo,rowSumThree,rowSumFour;
  int columnSumOne,columnSumTwo,columnSumThree,columnSumFour;
  int diagonalSumOne,diagonalSumTwo;

  printf("Enter the numbers from 1 to 16 in any order: \n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&one,&two,&three,&four,&five,&six,&seven,&eight,&nine,&ten,&eleven,&twelve,&thirteen,&fourteen,&fifteen,&sixteen);

  rowSumOne = one + two + three + four;
  rowSumTwo = five + six + seven + eight;
  rowSumThree = nine + ten + eleven + twelve;
  rowSumFour = thirteen + fourteen + fifteen + sixteen;

  columnSumOne = one + five + nine + thirteen;  
  columnSumTwo = two + six + ten + fourteen;
  columnSumThree = three + seven + eleven + fifteen;
  columnSumFour = four  + eight + twelve + sixteen;

  diagonalSumOne = one + six + eleven + sixteen;
  diagonalSumTwo = four + seven + ten + thirteen;

  printf("%d\t%d\t%d\t%d\n",one,two,three,four);
  printf("%d\t%d\t%d\t%d\n",five,six,seven,eight);
  printf("%d\t%d\t%d\t%d\n",nine,ten,eleven,twelve);
  printf("%d\t%d\t%d\t%d\n",thirteen,fourteen,fifteen,sixteen);

  printf("Row sums: %d %d %d %d\n",rowSumOne,rowSumTwo,rowSumThree,rowSumFour);
  printf("Column sums: %d %d %d %d\n",columnSumOne,columnSumTwo,columnSumThree,columnSumFour);
  printf("Diagonal sums: %d %d\n",diagonalSumOne,diagonalSumTwo);
}