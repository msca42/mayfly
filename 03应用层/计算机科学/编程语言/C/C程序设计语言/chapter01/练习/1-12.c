// 以每行一个单词的形式打印其输入
// 什么的是单词  指任何其中不包含空格，制表符或换行符的字符序列

#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
    int c, state;   

    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' '|| c == '\t' || c == '\n'){
            if(state ==  IN){
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT){
            state = IN;
            putchar(c);
        } else {
            putchar(c);
        }
    }
    
}

/*
目的 找到临界值
在单词中   打印
    单词准备开始 state  OUT 打印 转变状态
    单词已经开始   打印
不在单词中

    单词刚结束  state IN  换行 转变状态
*/