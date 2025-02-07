#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
int remove(char s[]);

int main(void)
{
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0)
        if(remove(line) >  0)
            printf("%s",line);
    return 0;
}

int remove(char s[])
{
    int i;

    i = 0;
    while (s[i]  !='\n')
        ++i;
    --i;
    while (i>0 && (s[i] == ' '|| s[i] == '\t'))
        --i;
    if (i >= 0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
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
