#include <stdio.h>

int main(void)
{
    int mm1,dd1,yy1;
    int mm2,dd2,yy2;
    printf("Enter first date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm1,&dd1,&yy1);

    printf("Enter second date (mm/dd/yy):");
    scanf("%d/%d/%d",&mm2,&dd2,&yy2);
    if(yy1 < yy2){
        printf("%d/%d/%02d is earlier than %d/%d/%02d",mm1,dd1,yy1,mm2,dd2,yy2);
    } else if (yy1 > yy2){
        printf("%d/%d/%02d is earlier than %d/%d/%02d",mm2,dd2,yy2,mm1,dd1,yy1);
    } else {
        if (mm1 < mm2){
            printf("%d/%d/%02d is earlier than %d/%d/%02d",mm1,dd1,yy1,mm2,dd2,yy2);
        } else if(mm1 > mm2){
             printf("%d/%d/%02d is earlier than %d/%d/%02d",mm2,dd2,yy2,mm1,dd1,yy1);
        } else {
            if (dd1 < dd2){
            printf("%d/%d/%02d is earlier than %d/%d/%02d",mm1,dd1,yy1,mm2,dd2,yy2);
            } else {
                printf("%d/%d/%02d is earlier than %d/%d/%02d",mm2,dd2,yy2,mm1,dd1,yy1);
            }
        }
    }
    return 0;
}