#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // 10x10的字符数组
    char map[10][10];
    // 起始字符
    char visited = 'A';
    // 偏移量
    int currentX,currentY;
    // 移动方向
    int direct[4] = {0,0,0,0};
    // 使用'.'的初始化数组
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10;j++){
            map[i][j] = '.';
        }
    }

    // 设置随机数seed
    srand((unsigned) time(NULL));
    // 设置随机数
    int x;
    // 设置偏移量
    currentX = currentY = 0;
    // 用起始字符设置字符数组 
    map[currentX][currentY] = visited++;                                                                                                   

    // 无限循环
    while (1)
    {   
        // 判断方向总数
        int sum = direct[0] + direct[1] + direct[2] + direct[3];
        // 退出机制
        // 1: 26步
        // 2: 上下左右
        if(visited > 'Z'  || sum == 4) break;
        // 设置随机数
        x = rand() % 4;
        // 当随机数为0、1、2、3
        // 不超过边界，
        if(x == 0){
            if(currentY == 0 || map[currentX][currentY-1]!='.'){
                direct[0] = 1;
                continue;
            }else{
                //设置值
                map[currentX][--currentY] = visited++;
                direct[0] = direct[1] = direct[2] = direct[3]= 0;
            }
        } else if(x == 1){
            if(currentY == 9 || map[currentX+1][currentY]!='.'){
                direct[1] = 1;
                continue;
            }else{
                //设置值
                map[++currentX][currentY] = visited++;
                direct[0] = direct[1] = direct[2] = direct[3]= 0;
            }
        } else if(x == 2){
            if(currentY == 9 || map[currentX][currentY + 1]!='.'){
                direct[2] = 1;
                continue;
            }else{
                //设置值
                map[currentX][++currentY] = visited++;
                direct[0] = direct[1] = direct[2] = direct[3]= 0;
            }

        } else if(x == 3){
            if(currentY == 0 || map[currentX][currentY + 1]!='.'){
                direct[3] = 1;
                continue;
            }else{
                //设置值
                map[--currentX][currentY] = visited++;
                direct[0] = direct[1] = direct[2] = direct[3]= 0;
            }

        }

        // 显示数组
        printf("\n");
        for(int i = 0; i < 10; i++){
            for(int j = 0 ; j < 10; j++){
                printf(" %c ",map[i][j]);
            }
            printf("\n");
        }
    }
    
}   