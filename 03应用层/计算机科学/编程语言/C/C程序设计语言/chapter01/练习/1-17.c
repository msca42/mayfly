/* 打印长度超过80个字符的所有输入行 */

#include <stdio.h>

#define MAXLINE 1000
#define LONGLINE 80

int getline(char line[],int maxline);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line,MAXLINE)) > 0)
        if (len > LONGLINE)
            printf("%s",line);
    return 0;
}
/* getline函数: 将一行读入s中并返回其长度 */
int getline(char s[], int lim)
{
    int c,i,j;
    
    j=0;
    for (i = 0;(c= getchar())!=EOF &&c !='\n';++i)
        if (i < lim -2){
            s[i]= c;
            ++j;
        }
    if(c=='\n'){
        s[i] = c;
        ++i;
        ++j;
    }
    s[i] = '\0';
    return i;
}
