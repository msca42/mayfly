#include <stdio.h>

int main(void)
{
    //  字符长度、空格个数
    char ch;
    float count = 0;
    float blank_count = 0;
    float length;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        if(ch == ' '){
            blank_count++;
            continue;
        }
        count++;
       
    }
    length  = count / (blank_count+1);
    
    printf("Average word length:  %.1f",length);
}