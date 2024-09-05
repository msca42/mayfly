/*
 * Name: 7.c
 * Purpose:  编写程度读取5x5的整数数组，侠士每行和每列的和
 * Author: mayfly
 * Description:
 *  Enter row 1: 8 3 9 0 10
 *  Enter row 2: 3 5 17 1 1
 *  Enter row 3: 2 8 6 23 1
 *  Enter row 4: 15 7 3 2 9 
 *  Enter row 5: 6 14 2 6 0
 * 
 *  Row totals: 30 27 40 36 28
 *  Column totals: 34 37 37 32 21
 */
/* 
分析: 如何输入数据，输入目前有两种方式scanf函数和getchar()函数，后者只能输入字符，所以一定使用前者
*/
#include <stdio.h>

int main(void)
{
    // 输入数据
    int array[5][5];
    int rowSum,columnSum;
    for(int i = 0; i < 5; i++){
        printf("Enter row %d:",(i+1));
        for(int  j = 0; j < 5; j++){
            scanf(" %d",& array[i][j]);
        }
        // 清楚回车符
        getchar();
    }

    // 显示
    printf("Row totals: ");
    for(int i =0; i < 5;i++){
        rowSum = 0;
        for(int j = 0; j < 5; j++){
            rowSum += array[i][j];
        }
        printf("%3d",rowSum);
    }
    printf("\nColumn totals: ");
   for(int i =0; i < 5;i++){
        columnSum = 0;
        for(int j = 0; j < 5; j++){
            columnSum += array[j][i];
        }
        printf("%3d\n",columnSum);
    }

}