#include <stdio.h>

int evaluate_position(char board[8][8]);

int evaluate_position(char board[8][8])
{
    int white_scores = 0;
    int black_scores = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
            case 'Q':
                white_scores += 9;
                break;
            case 'q':
                black_scores += 9;
                break;
            case 'R':
                white_scores += 5;
                break;
            case 'r':
                black_scores += 5;
                break;
            case 'B':
            case 'N':
                white_scores += 3;
                break;
            case 'b':
            case 'n':
                black_scores += 3;
                break;
            case 'P':
                white_scores += 1;
                break;
            case 'p':
                black_scores += 1;
                break;
            }
        }
    }

    int score = white_scores - black_scores;
    if(score > 0) {
        return 1;
    } else {
        return -1;
    }
}