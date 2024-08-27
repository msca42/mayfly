/*
 * Name: 11.c 
 * Purpose: switch案例
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
  int area_code;
  switch (area_code)
  {
  case 229:
    printf("Albany");
    break;
  case 404:
    printf("Atlanta");
    break;
  case 470:
    printf("Atlanta");
    break;
  case 478:
    printf("Macon");
    break;
  case 678:
    printf("Atlanta");
    break;
  case 706:
    printf("Columbus");
    break;
  case 762:
    printf("Columbus");
    break;
  case 770:
    printf("Atlanta");
    break;
  case 912:
    printf("Savannah");
    break;
  default:
    printf("Area code not recognized");
  }
}