/*
 * Name: 8.c 
 * Purpose:  为temperature_readings二维数组编写声明
 * Author: mayfly
 * Description: 
 *  该数组存储一个月(30天)中每个小时的温度读数
 *  数组每行对应每天 30行
 *  数组每列对应每小时 24列
 *  30x24
 */
#include <stdio.h>
#define DAYS  30
#define HOURS 24

int main(void)
{
    int temperature_readings[DAYS][HOURS];
}