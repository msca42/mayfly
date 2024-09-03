/*
 * Name: 9.c 
 * Purpose:  计算一个月的平均温度
 * Author: mayfly
 * Description: 
 *  利用8.c的数组计算平均温度
 *  对每月中的每天，和每天中的每小时取平均
 */
#include <stdio.h>
#define DAYS  30
#define HOURS 24

int main(void)
{
    int temperature_readings[DAYS][HOURS] = {0};

    // 每天中的每小时
    int sum_hours = 0;
    int average_temperature_day_hours[DAYS] = {0};
    int sum_days = 0;
    int average_hour = 0;
    for (int i = 0; i < DAYS; i++){
        for (int j = 0; j < HOURS; j++){
            sum_hours += temperature_readings[i][j];
        }
        average_temperature_day_hours[i] = sum_hours/ HOURS;
        sum_hours = 0;
    }

    for(int i =0; i < DAYS; i++) {
        sum_days += average_temperature_day_hours[i];
    }

    average_hour = sum_days / DAYS;
    printf("一个月中每小时的温度读数是: %d",average_hour);

}

