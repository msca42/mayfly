#include <stdio.h>

int main(void)
{
  int gs1;
  int identifier;
  int code;
  int itemNumber;
  int digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d",&gs1,&identifier,&code,&itemNumber,&digit);
  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", identifier);
  printf("Publisher code: %d\n",code);
  printf("Item number: %d\n",itemNumber);
  printf("Check digit: %d\n",digit);
}