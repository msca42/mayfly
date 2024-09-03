/*
 * Name: 11.c
 * Purpose:  为8x8字符数组编写声明，数组名为checker_board
 * Author: mayfly
 * Description:
 * 用一个循环吧下列数据写入数组
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * 提示如果i+j为偶数，则i行j列元素是B
 */
#include <stdio.h>
int main(void)
{
    char checker_board[8][8] = {0};
    for(int i = 0; i < 8; i++){
        for(int j =0; j < 8; j++){
            if((i + j) % 2 == 0){
                checker_board[i][j] = 'B';
            } else {
                checker_board[i][j] = 'R';
            }
        }
    }


    for(int i = 0;i< 8;i++){
        for(int j = 0;j < 8; j++){
            if(j % 7 == 0 && j != 0){
            printf("%c\n",checker_board[i][j]);
            } else {
            printf("%c ",checker_board[i][j]);
            }
        }
    }
}