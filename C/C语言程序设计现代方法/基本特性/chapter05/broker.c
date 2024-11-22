/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commisson, value;
    
    printf("Enter value of trade: ");
    scanf("%f", &value);

    if(value < 2500.00f){
        commisson = 30.00F + .017F * value;
    } else if (value < 6250.00f) {
        commisson = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commisson = 76.00f + .0034f * value;
    } else if (value < 5000.00f){
        commisson = 100.00f + .0022f * value;
    } else if(value < 500000.00f){
        commisson = 155.00f + .0011f * value;
    } else {
        commisson = 255.00f + .0009f  * value;
    }

    if (commisson < 39.00f){
        commisson = 39.00f;
    }

    printf("Commission: $%.2f\n", commisson);

    return 0;
    
}