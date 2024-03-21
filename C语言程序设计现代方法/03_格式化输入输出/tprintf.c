/* Prints int and float values in various formats*/

#include <stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  // 格式串 = 普通字符和转换说明(占位符)
  // %m.pX m表示最少字符数量，如果显示字符少于m，右对齐前面以空格补充；如果多于m,默认显示，负号表示左对齐
  // p对于不同的X表示不同含义，对于d表示待显示的数字的最少个数，对于e、f表示小数点后显示的数字个数(默认6)
  // 常见转义字符 \a 警报符 \b 回退符 \n换行符 \t水平制表符8个字符宽度
  printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
  printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);
}
