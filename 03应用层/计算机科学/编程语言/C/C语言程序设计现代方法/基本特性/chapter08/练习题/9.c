#include <stdio.h>

int main(void)
{
     int temperature_readings[30][24] = {0};
     int sum  = 0;
     for(int i = 0; i < 30; i++){
        for(int j = 0; j < 24; j++){
            sum += temperature_readings[i][j];
        }
     }
     int ave = sum / (30 * 24);
}