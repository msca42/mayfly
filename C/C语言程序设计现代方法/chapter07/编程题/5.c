/*
 * Name: 5.c 
 * Purpose:  十字拼字游戏，通过对单词中字母的面值求和来计算单词的值
 * Author: mayfly
 * Description:
 * Enter a word: pitfall
 * Scrabble value: 12
 * 面值:
 *  1-AEILNORSTU 
 *  2-DG
 *  3-BCMP
 *  4-FHVWY
 *  5-K
 *  8-JX
 *  10-QZ
 * 注意事项: 输入中可以出现大小写，使用toupper库函数
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int value = 0;
    printf("Enter a word: ");
    while ((ch=toupper(getchar()))!='\n')
    {
        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            value += 1;
            break;
        case 'D':
        case 'G':
            value += 2;
            break;
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            value += 3;
            break;
        case 'F':
        case 'V':
        case 'H':
        case 'W':
        case 'Y':
            value += 4;
            break;
        case 'K':
            value += 5;
            break;
        case 'J':
        case 'X':
            value += 8;
            break;
        case 'Q':
        case 'Z':
            value += 10;
            break;
        }
    }

    printf("Scrabble value: %d\n",value);
    
}
