#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;
    int sum = 0;
    printf("Enter a sentence: ");
    while ((c=getchar())!='\n')
    {
        switch (toupper(c))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            sum += 1;
            break;
        }
    }
    printf("Your sentence contains %d vowels\n", sum);

    return 0;
    
}