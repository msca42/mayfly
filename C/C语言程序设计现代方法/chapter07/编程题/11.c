/*
 * Name: 11.c 
 * Purpose:  要求用户输入英文名和姓，并根据用户的输入先显示姓，其后跟一个逗号，然后显示名的首字母，最后加一个点
 * Author: mayfly
 * Description:
 *  Enter a first and last name： Lloyd Fosdick
 *  Fosdick, L.
 */
/* 
如何利用单字符char接收一个字符串输入
如何输出一个字符串
*/
#include <stdio.h>
#define N -999 // 标志符

int main(void)
{
    char ch;
    char firstName;
    char secondName;
    int count = 0;
    printf("Enter a first and last name:");
    while ((ch=getchar())!='\n')
    {
        if(count == 0 ){
            firstName = ch;
            count++;
        }
        if (ch == ' '){
            count = N;
        }
       
        if (count == N){
            secondName = ch;
            printf("%c",secondName);
        }
    }
    printf(",");
    printf("%c\n",firstName);
    

}

