#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int e, f, g, h;
  int i, j, k, l;
  int m, n, o, p;
  printf("Enter the numbers from 1 to 16 in any order:");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  printf("%2d %2d %2d %2d\n", a, b, c, d);
  printf("%2d %2d %2d %2d\n", e, f, g, h);
  printf("%2d %2d %2d %2d\n", i, j, k, l);
  printf("%2d %2d %2d %2d\n", m, n, o, p);

  int row_sums_one = a + b + c + d;
  int row_sums_two = e + f + g + h;
  int row_sums_three = i + j + k + l;
  int row_sums_four = m + n + o + p;
  printf("Row sums: %d %d %d %d\n", row_sums_one, row_sums_two, row_sums_three, row_sums_four);

  int column_sum_one = a + e + i + m;
  int column_sum_two = b + f + g + h;
  int column_sum_three = c + g + k + o;
  int column_sum_four = d + h + l + p;
  printf("Column sums: %d %d %d %d\n", column_sum_one, column_sum_two, column_sum_three, column_sum_four);

  int diagonal_sums_one = a + f + k + p;
  int diagonal_sums_two = d + g + j + m;
  printf("Diagonal sums: %d %d\n", diagonal_sums_one, diagonal_sums_two);
  return 0;
}