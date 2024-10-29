#include <stdio.h>

int main(void)
{
    int money;
    printf("Enter a dollar amount: ");
    scanf("%d",&money);

    int numberTwenty, numberTen,numberFive,numberOne;
    numberTwenty = money / 20;
    numberTen =  (money - (numberTwenty * 20)) / 10;
    numberFive = (money - (numberTwenty * 20) - numberTen * 10) / 5;
    numberOne = money % 5;

    printf("$20 bills: %d\n",numberTwenty);
    printf("$10 bills: %d\n",numberTen);
    printf(" $5 bills: %d\n",numberFive);
    printf(" $1 bills: %d\n",numberOne);
}