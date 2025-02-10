#include <stdio.h>

int main(void)
{

    // 声明
    int amount;
    int twenty_note,ten_note,five_note,one_note;

    // 提示输入
    printf("Enter a dollar amount : ");
    scanf("%d",&amount);

    // 核心逻辑
    twenty_note = amount  / 20;
    ten_note = (amount - twenty_note * 20) / 10;
    five_note = (amount - twenty_note * 20 - ten_note * 10) / 5;
    one_note = (amount - twenty_note *  20 - ten_note * 10 ) % 5;

    // 输出
    printf("$20 bills: %d\n", twenty_note);
    printf("$10 bills: %d\n", ten_note);
    printf("$5 bills: %d\n", five_note);
    printf("$1 bills: %d\n", one_note);

    return 0;
}

/*
输入一个美元数量、显示如何用20美元、10美元、5美元和1美元来付款
思路: 如何获取各个币值的数量，使用整除
*/