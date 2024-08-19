/*
 * Name: 3.c 
 * Purpose: 编写一个计算球体体积的程序
 * Author: mayfly
 * Description:  V = 4/3 *  pi *  r^3 用户自行输入半径
 */
// 指令 输入输出库函数、宏定义
#include <stdio.h>
#define PI 3.14

// main函数
int main(void)
{
  // 声明半径
  int r;
  float V;

  //半径提示语
  printf("请输入球体半径:");
  // 格式化输入函数
  scanf("%d",&r);
  // 体积公式
  V  =  (4.0 / 3.0) * PI * r * r * r; 
  // 输出体积
  printf("球体体积是:%f\n",V);
}
/*
注意事项: 体积公式表达式不能直接作为初始化器赋值给V，需要等待格式化输入半径之后，否则会导致使用内存中其他数据
*/