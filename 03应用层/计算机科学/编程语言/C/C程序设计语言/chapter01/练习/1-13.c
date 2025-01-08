#include <stdio.h>

#define MAXHIST 15 /* max length of histogram */
#define MAXWORD 11 /* max length of a word */
#define IN 1   /* inside a word */
#define OUT 0 /* outside a word */

/* print horizontal histogram */
int main()
{
    int c, i , nc, state;
    int len; /* length of each bar */
    int maxvalue; /* maximum value for wl[] */
    int ovflow;  /* number of overflow words */
    int wl[MAXWORD]; /* word length counters */

    state = OUT;
}