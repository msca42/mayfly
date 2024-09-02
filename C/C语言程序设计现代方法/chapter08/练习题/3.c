/*
 * Name: 3.c 
 * Purpose:  声明数组
 * Author: mayfly
 * Description: 声明一个weekend数组，包含7个bool值，要求用一个初始化器把第一个值和最后一个值置为true，其他值都置为false
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // _Bool weekend = {[0]=true,[6]=true};
     _Bool weekend[7] = {true,false,false,false,false,false,true};    
}
/*
没有将weekend声明为数组:指示符不能与非聚合类型_Bool一起使用
*/