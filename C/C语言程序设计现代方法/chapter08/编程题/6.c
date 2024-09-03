/*
 * Name: 6.c
 * Purpose:  编写一个B1FF过滤器
 * Author: mayfly
 * Description:
 *  Enter message: Hey dude, C is rilly cool
 *  In B1FF-speak: H3Y DUD3, C 15 R1LLY COOL!!!!!!!!!!
 *  详细过程:
 *   将消息转换为大写字母，用数字代替特定字母(A-4、B-8、E-3、I-1、O-0、S-5)
 *   然后添加10个组有的感叹号
 *  将原消息存储在字符数组中，然后从数组头翻译并显示字符
 */
#include <stdio.h>

int main(void)
{   
    // 确定数组长度
    char ch;
    int arrayCount = 0;
    printf("Enter message:");
    while ((ch=getchar())!='\n')
    {
        arrayCount++;
    }
    char ches[arrayCount];
    
}