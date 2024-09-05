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
 *  问题: 确定字符数组长度
 */
#include <stdio.h>
#include <ctype.h>
#define LENGTH 100

int main(void)
{   
    // 存储数据
    char chs[LENGTH] = {0};
    char ch;
    int count = 0;
    printf("Enter message:");
    while ((ch=getchar())!='\n')
    {
        chs[count] = ch;
        count++;
    }

    // 转换数据
    for (int i = 0; i < count;i++)
    {
        chs[i]  = toupper(chs[i]);
        if(chs[i] == 'A'){
            chs[i] = '4';
        } else if(chs[i] == 'B'){
            chs[i]= '8';
        }  else if(chs[i] == 'E'){
            chs[i] = '3';
        }  else if(chs[i] == 'I'){
            chs[i] = '1';
        }   else if(chs[i] == 'O'){
            chs[i] = '0';
        }  else if(chs[i] == 'S'){
            chs[i] = '5';
        }  
    }
    
    printf("In B1FF-speak: ");
    // 打印数据
    for(int i = 0; i < count; i++)
    {
       putchar(chs[i]);
    }
    printf("!!!!!!!!!!\n");
    
}