/*
 * Name: 10.c 
 * Purpose:  统计句子中元音字母(a、e、i、o、u)的个数
 * Author: mayfly
 * Description:
 *  Enter a sentence: And that's the way it is.
 *  Your sentence contains 6 vowels.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter a sentence:");
    while ((ch = toupper(getchar()))!= '\n')
    {
        if(ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O' || ch == 'U') {
            count++;
        }
    }
    printf("Your sentence contains %d vowels.", count);
    
}