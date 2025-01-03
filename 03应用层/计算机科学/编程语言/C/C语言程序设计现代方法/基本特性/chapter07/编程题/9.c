#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, time;
    char ch;
    printf("Enter a  12-hour time: ");   
    scanf("%d:%d %c",&hour,&time,&ch);
    printf("Equivalent 24-hour time: ");
    switch (toupper(ch))
    {
    case 'A':
        printf("%d:%d",hour,time);
        break;
    case 'P':
        printf("%d:%d",hour+12,time);
        break;
    }   
}