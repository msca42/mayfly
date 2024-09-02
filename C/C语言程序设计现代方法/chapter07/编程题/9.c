/*
 * Name: 9.c 
 * Purpose:  用户输入12小时制的时间，然后用24小时制显示该时间
 * Author: mayfly
 * Description:
 *  Enter a 12-hour time: 9:11 PM
 *  Equivalent 24-hour time: 21:11
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour,minutes;
    char time;
    printf("Enter a 12-hour time:");
    scanf("%d:%d %c",&hour,&minutes,&time);

    switch (toupper(time))
    {
    case 'A':
        printf("Equivalent 24-hour time: %d:%d\n",hour,minutes);
        break;
    case 'P':
        printf("Equivalent 24-hour time: %d:%d\n",(hour+12),minutes);
        break;
    }
}