#include <stdio.h>

int main(void)
{
    int month,start;
    printf("Enter number of days in month: ");
    scanf("%d",&month);

    printf("Enter starting day of teh week (1=Sun, 7= Sat): ");
    scanf("%d",&start);

    for(int i = 1; i <= month + start -1; i++){
        if(i < start){
            printf(" \t");
            continue;
        }
    
        printf("%d\t", i - (start - 1) );
        if( ( i - (start - 1)) % 7 ==  7 - start + 1){
            printf("\n");
        }
    }
}