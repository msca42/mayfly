#include <stdio.h>

int main(void)
{
  int start,mid,end;
  printf("Enter phone number [(xxx) xxx-xxxx]:");
  scanf("(%d)%d-%d",&start,&mid,&end);
  printf("You entered %d.%d.%d\n",start,mid,end);
}