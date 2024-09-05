/*
 * Name: 9.c
 * Purpose:  生成一个贯穿10x10字符数组的随机步法
 * Author: mayfly
 * Description:
 *  初始字符.
 *  程序必须随机的从一个元素走到另一个元素，每次向上下左右移动一个元素位置，已访问的元素使用A~Z标记
 *  提示: 利用srand函数和rand函数产生随机数，然后查看此数除以4的余数，按照余数确定方向
 *  规则: 不能走到数组外面，不能走到已有字母标记位置，如果四个方向都堵住了，停止 
 * 
 *  TODO
 */

/*
分析:
    建议一个10x10的数组
    通过一个有条件的循环进行赋值操作
        生成一个0～3的随机数，通过随机数指明方向
    显示数组
生成随机数步骤
    获取当前时间 time(NULL) 类型time_t
    确定种子 srand(time) 参数类型unsigned
    生成随机数 rand()

*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 10
#define NUM_SUITS 4

int main(void)
{
    // 声明数组
    int array[LENGTH][LENGTH];
    char ch = 'A';
    // 移动位置参数
    int x;
    int y;
    // 根据随机数赋值 0 1 2 3 上右下左
    int direct[4] = {0, 0, 0, 0};
    // 初始化数组
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < LENGTH; j++)
        {
            array[i][j] = '.';
        }
    }

    // 生成随机数
    srand((unsigned)time(NULL));
    int random;
    x = 0;
    y = 0;
    // 随机步数
    array[x][y] = ch++;

    while (true)
    {
        int sum = direct[0] + direct[1] + direct[2] + direct[3];
        // 限制条件，不超出界 不能走到已有标记位置
        if (ch > 'Z' || sum == 4)
            break;
        random = rand() % NUM_SUITS;
        if (random == 0)
        {
            if (y == 0 || array[x][y-1] != '.')
            {
                direct[0] = 1;
                continue;
            }
            else
            {
                array[x][--y] = ch++;
                direct[0] = direct[1] = direct[2] = direct[3] = 0;
            }
        }
        else if (random == 1)
        {
            if (x == 9 || array[x+1][y] != '.')
            {
                direct[1] = 1;
                continue;
            }
            else
            {
                array[++x][y] = ch++;

                direct[0] = direct[1] = direct[2] = direct[3] = 0;
            }
        }
        else if (random == 2)
        {

            if (y == 9 || array[x][y+1] != '.')
            {
                direct[2] = 1;
                continue;
            }
            else
            {
                array[x][++y] = ch++;
                direct[0] = direct[1] = direct[2] = direct[3] = 0;
            }
        }
        else if (random == 3)
        {
            if (x == 0 || array[x - 1 ][y] != '.')
            {
                direct[3] = 1;
                continue;
            }
            else
            {
                array[--x][y] = ch++;
                direct[0] = direct[1] = direct[2] = direct[3] = 0;
            }
        }
    }
    // 显示数组
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < LENGTH; j++)
        {
            printf("%2c", array[i][j]);
        }
        printf("\n");
    }
}
