/* 
打印输入中单词长度的直方图，垂直
*/
#include <stdio.h>

#define MAXHIST 15 /* max length of histogram */
#define MAXWORD 11 /* max length of a word */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* print horizontal histogram */
int main(void)
{
    // 声明
    int c, i, j, nc, state;
    int maxvalue; /* maximum value for wl[] */
    int ovflow; /* number of overflow words */
    int wl[MAXWORD]; /* word length counters */
    
    // 初始化
    state = OUT;
    nc = 0;   /* number of chars in a word */
    ovflow = 0; /* number of words >= MAXWORD */
    for(i = 0; i < MAXWORD; ++i)
        wl[i] = 0;

    // 获取输入
    while((c=getchar()) != EOF){
        // 出单词
        if(c == ' ' || c == '\n'|| c== '\t') {
            // 变更状态
            state = OUT;
            // 单词长度数组
            if (nc > 0)
                if(nc < MAXWORD) 
                    ++wl[nc];
                else
                    ++ovflow;
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc  = 1; /* beginning of a new word */
        } else 
            ++nc;  /* inside a word */
    }
    maxvalue = 0;
    for (i = 1; i < MAXWORD; ++i)
        if (wl[i]> maxvalue)
            maxvalue = wl[i];

    for (i = MAXHIST;  i > 0; --i) {
        for (j = 1; j < MAXWORD; ++j)
            if (wl[j] * MAXHIST / maxvalue >= i)
                printf(" * ");
            else 
                printf("   ");
        putchar('\n');
    }
    for (i = 1; i <  MAXWORD; ++i)
        printf("%4d ",i);
    putchar('\n');
    for (i = 1; i < MAXWORD; ++i)
        printf("%4d ",wl[i]);
    putchar('\n');
    if (ovflow > 0)
        printf("There are %d words >= %d\n",ovflow,MAXWORD);
}