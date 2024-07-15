#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hours,minutes;
    char am_pm;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c",&hours,&minutes,&am_pm);
    if(toupper(am_pm) == 'A'){
        printf("Equivalent 24-hour time: %d:%d\n", hours,minutes);
    }
    else {
        printf("Equivalent 24-hour time: %d:%d\n", (hours + 12),minutes);
        
    }
}