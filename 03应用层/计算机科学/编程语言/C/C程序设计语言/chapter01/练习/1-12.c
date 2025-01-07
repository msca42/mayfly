#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int  c, state;

    state = OUT;
    
    while ((c = getchar())!=EOF)
    {
        if (c == ' '|| c =='\t' || c == '\n'){
            /* finish the word*/
            putchar('\n');
            state = OUT;
        } else if (state == OUT){
            /* beginning  the word*/
            state = IN;
            putchar(c);
        } else {
            /* inside the word*/
            putchar(c);
        }
       
    }
    
}