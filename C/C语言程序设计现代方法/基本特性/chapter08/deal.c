/* Deals a random hand of cards */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// srand函数  初始化c语言的随机数生成器
// rand函数  产生一个看似随机的数
#include <time.h>
// time函数 返回当前的时间

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2','3','4','5','6','7','8',
                            '9','t','j','q','k','a'};
    const char suit_code[] = {'c','d','h','s'};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d",&num_cards);
    printf("Your hand: ");
    while (num_cards > 0)
    {
        suit = rand() % NUM_SUITS; /* pick a random suit */
        rank = rand() % NUM_RANKS; /* pick a random rank */
        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c",rank_code[rank],suit_code[suit]);
        }
    }

    printf("\n");
    return 0;
    
}