#include <stdio.h>
#include <ctype.h>
#define LENGTH 100

int main(void)
{
    // 问题: 我需要一个数组存储字符，我不知道数组长度，我可以录入字符
    // 如何创建一个数组？
    char ch;
    char chs[LENGTH];
    int count = 0;
    printf("Enter message: ");
    while ((ch = getchar())!='\n')
    {
        chs[count] = toupper(ch);
        count++;
    }

    printf("In B1FF-speak: ");
    for(int i = 0;i < count; i++){
        if(chs[i] == 'A') {
            printf("%d", 4);
            continue;
        } else if (chs[i] == 'B'){
            printf("%d", 8);
            continue;
        } else if (chs[i] == 'E') {
            printf("%d", 3);
            continue;
        } else if (chs[i] == 'I'){
            printf("%d", 1);
            continue;
        } else if (chs[i] == 'O'){
            printf("%d", 0);
            continue;
        } else if (chs[i] == 'S'){
            printf("%d", 5);
            continue;
        } 
        printf("%c",chs[i]);
    }
    for(int i = 0; i < 10; i++){
        printf("!");
    }



    
}