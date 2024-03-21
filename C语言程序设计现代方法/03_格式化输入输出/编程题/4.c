#include <stdio.h>

int main(void)
{ 
  int countryCode;
  int areaCode;
  int telephone;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d",&countryCode,&areaCode,&telephone);
  printf("You entered %d.%d.%d\n",countryCode,areaCode,telephone);
}