#include <stdio.h>

int main(void)
{

    int money;
    int twenty_number,ten_number,five_number,one_number;
    printf("Enter a dollar amount:");
    scanf("%d",&money);

    twenty_number = money  / 20;
    ten_number = (money - twenty_number * 20) / 10;
    five_number = (money - twenty_number * 20 - ten_number * 10) / 5;
    one_number = money - twenty_number *  20 - ten_number * 10 - five_number * 5;

    printf("$20 bills: %d\n", twenty_number);
    printf("$10 bills: %d\n", ten_number);
    printf("$5 bills: %d\n", five_number);
    printf("$1 bills: %d\n", one_number);

    
}