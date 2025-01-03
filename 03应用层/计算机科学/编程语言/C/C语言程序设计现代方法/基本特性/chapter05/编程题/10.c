#include <stdio.h>

int main(void)
{
    // 声明
    int score;
    int digit;

    // 输入
    printf("Enter numerical grade: ");
    scanf("%d",&score);

    // 有效区间判定
    if(score > 100 || score < 0){
        printf("Error input score, exit.");
        return 0;
    }

    digit = score / 10;
    
    // 转换判断
    switch (digit)
    {
    case 10: case 9:
        printf("Letter grade: A");
        break;
    case 8:
        printf("Letter grade: B");
        break;
    case 7: 
        printf("Letter grade: C");
        break;
    case 6:
        printf("Letter grade: D");
        break;
    default:
        printf("Letter grade: F");
        break;
    }
}

/*
利用switch把数字表示的成绩转化位字母表示的等级
*/