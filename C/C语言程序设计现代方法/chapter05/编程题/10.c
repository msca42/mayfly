#include <stdio.h>

int main(void)
{
  int score;
  int digit;

  printf("Enter numerical grade: ");
  scanf("%d", &score);
  if (score > 100 || score < 0)
  {
    printf("Error inut score, exit.");
    return 0;
  }
  digit = score / 10;
  switch (digit)
  {
  case 10:
  case 9:
    printf("Letter grade: A");
    break;
  case 8:
    printf("Letter grade: B");
    break;
  case 7:
    printf("Letter grade: C");
    break;
  case 6:
    printf("Letter grade: D");
    break;
  default:
    printf("Letter grade: E");
    break;
  }
  return 0;
}