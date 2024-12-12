#include <stdio.h>

int main(void)
{
    // 声明
    int first,second,third;
    // 输入
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d)%d-%d",&first,&second,&third);
    // 输出
    printf("You entered %03d.%03d.%04d\n",first,second,third);
    return 0;
}

/*
提示用户以(xxx)xxx-xxxx的格式输入电话号码，并以xxx.xxx.xxxx的格式显示
*/