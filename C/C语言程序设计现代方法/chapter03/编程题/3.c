/*
 * Name: 3.c 
 * Purpose: 编写一个程序分解ISBN的信息
 * Author: mayfly
 * Description: 
 *  Enter ISBN :  978-0-393-97950-3
 *  GS1 prefix: 978
 *  Group identifier: 0
 *  Publisher code:  393
 *  Item number: 97950
 *  Check digit: 3
 *  注意事项: 数字个数可变
 */

#include <stdio.h>

int main(void)
{
  // 声明
  int gs1_prefix,group_identifier,publisher_code,item_number,check_digit;
  //输入
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d",&gs1_prefix,&group_identifier,&publisher_code,&item_number,&check_digit);
  //输出
  printf("GS1 identifier: %d\n", gs1_prefix);
  printf("Group identifier: %d\n",group_identifier);
  printf("Publisher code: %d\n",publisher_code);
  printf("Item number: %d\n", item_number);
  printf("Check digit: %d\n",check_digit);

  // 返回值
  return 0;

}