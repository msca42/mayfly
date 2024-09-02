/*
 * Name: 4.c 
 * Purpose:  编写可以把字母格式的电话号码翻译成数值格式的程序
 * Author: mayfly
 * Description:
 *  Enter phone number: CALLATT
 *  2255288
 *  Enter phone number: 1-800-COL-LECT
 *  1-800-265-5328
 *  数字和字母对应关系
 *  2=ABC 3=DEF 4=GHI 5=JKL 6=MNO 7=PQRS 8=TUV 9=WXYZ 
 */
/*
分析: 如何获取输入、如何将输入转换为数字、如何显示数字
- 如何获取输入  
    - 两个函数一个scanf()一个getchar()
    - 两者区别是什么？
        - scanf()是格式化输入
        - getchar()是单个字符输入
    - 这里毫无疑问选择getchar()

一个问题 
    a = getchar() while(a!='\n')
    while((a=getchar())!='\n')
    区别是什么
    前者会陷入无限循环的陷阱，只调用一次getchar()

*/
#include <stdio.h>

int main(void)
{
    char a;
    printf("Enter phone number:");
  
    while ( (a= getchar()) != '\n')
    {
        switch (a)
        {
        case 'A':
        case 'B':
        case 'C':
            printf("%d",2);
            break;
        case 'D':
        case 'E':
        case 'F':
             printf("%d",3);
            break;
        case 'G':
        case 'H':
        case 'I':
            printf("%d",4);
            break;    
        case 'J':
        case 'K':
        case 'L':
            printf("%d",5);
            break;
        case 'M':
        case 'N':
        case 'O':
              printf("%d",6);
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
              printf("%d",7);
            break;
        case 'T':
        case 'U':
        case 'V':
             printf("%d",8);
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
              printf("%d",9);
            break;
        
        default:
            printf("%c",a);
            break;
        }
    }
    printf("\n");
    
}