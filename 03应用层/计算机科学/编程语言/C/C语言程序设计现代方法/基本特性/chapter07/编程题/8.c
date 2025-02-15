#include <stdio.h>

int main(void)
{
    int hour,minute;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c",&hour,&minute,&ch);
    int time =  hour * 60 + minute;
    if(time < (8 * 60 + 9 * 60 + 43)/2){
        printf("Closest departure time is 8:00 a.m, arriving at  10:16 a.m");
    } else if(time < (9 * 60 + 43  + 11* 60  + 19)/2) {
        printf("Closest departure time is 9:43 a.m, arriving at  11:52 a.m");
    } else if(time < (11 * 60 + 19 + 12* 60 + 47)/2){
        printf("Closest departure time is 11:19 a.m, arriving at  1:31 p.m");
    } else if (time < (12 * 60 + 47 + 14 * 60 )/2){
        printf("Closest departure time is 12:47 a.m, arriving at  3:00 p.m");
    } else if (time < (14 * 60 + 15* 60 + 45)/2){
        printf("Closest departure time is 2:00 p.m, arriving at  4:08 p.m");
    } else if (time < (15 * 60 + 45  + 19 * 60)/2){
        printf("Closest departure time is 3:45 p.m, arriving at  5:55 p.m");
    } else if (time < (19 * 60 + 21 * 60 + 45)/2){
        printf("Closest departure time is 7:00 p.m, arriving at  9:20 p.m");
    } else  {
        printf("Closest departure time is 9:45 p.m, arriving at  11:58 p.m");
    }
    
    return 0;

}