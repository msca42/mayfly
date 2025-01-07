#include <stdio.h>

int main()
{
    char c;
    int prevIsSpace  = 0;
    while ((c = getchar())!= EOF)
    {
     
        // 如何处理多个空格
        if(c == ' '){
            if(!prevIsSpace){
                putchar(' ');
                prevIsSpace = 1;
            }
        }  else {
            putchar(c);
            prevIsSpace = 0;
        }
        
    }
    
}