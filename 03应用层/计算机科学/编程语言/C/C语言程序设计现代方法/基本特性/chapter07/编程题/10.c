#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;
    printf("Enter a sentence: ");
    while ((ch = getchar())!='\n')
    {
        switch (toupper(ch))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }
    printf("Your sentence contains %d vowels.",count);
    return 0;
}