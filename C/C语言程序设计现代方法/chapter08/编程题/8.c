/*
 * Name: 8.c
 * Purpose:  修改7.c
 * Author: mayfly
 * Description:
 *  提示用户输入每个学生5门测验的成绩，一共有5个学生
 *  然后计算每个学生的总分和平均分，以及每门测验的平均分、高分和低分
 */
#include <stdio.h>

int main(void)
{
    // 输入数据
    int array[5][5];
    for(int i = 0; i < 5; i++){
        printf("Enter five grade with No.%d student:",(i+1));
        for(int  j = 0; j < 5; j++){
            scanf(" %d",& array[i][j]);
        }
        // 清楚回车符
        getchar();
    }

    // 显示
    int stuSum; // 每个学生的总分
    int averageStuSum; // 每个学生的平均分
    for(int i =0; i < 5; i++){
        stuSum = 0;
        for(int j = 0; j < 5; j++){
            stuSum += array[i][j];
        }
        averageStuSum = stuSum / 5;
        printf("第%d名学生的总分是:%d,平均分是:%d\n",i,stuSum,averageStuSum);
    }
   

    float classSum;
    float averageClassGrade; // 测试平均分
    int highClassGrade; // 测试最高分
    int lowClassGrade; // 测试最低分 
    for(int i =0 ; i < 5; i++){
        classSum = 0;
        highClassGrade = 0;
        lowClassGrade = 100;
        for(int j = 0; j < 5; j++){
            if(highClassGrade < array[j][i]){
                highClassGrade = array[j][i];
            }
            if(lowClassGrade > array[j][i]){
                lowClassGrade = array[j][i];
            }
            classSum += array[j][i];
        }
        averageClassGrade = classSum / 5;
        printf("第%d门测验的平均分是:%.2f,最高分是%d,最低分是%d\n",i,averageClassGrade,highClassGrade,lowClassGrade);
    }
 

}