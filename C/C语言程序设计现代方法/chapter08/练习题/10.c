/*
 * Name: 10.c
 * Purpose:  为8x8字符数组编写声明，数组名为chess_board
 * Author: mayfly
 * Description:
 *  用一个初始化器将下列数据放入数组
 *  r n b q k b n r
 *  p p p p p p p p
 *    *   *   *   *
 *  *   *   *   *
 *    *   *   *   *
 *  *   *   *   *
 *  P P P P P P P P
 *  R N B Q K B N R
 */

int main(void)
{
    char chess_borad[8][8] =
        {
            {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {0, '*', 0, '*', 0, '*', 0, '*'},
            {'*', 0, '*', 0, '*', 0, '*', 0},
            {0, '*', 0, '*', 0, '*', 0, '*'},
            {'*', 0, '*', 0, '*', 0, '*', 0},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};
}