#include <stdio.h>

int main(void)
{
    int mm, dd, yy;
    int min_mm , min_dd , min_yy  ;
      printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &mm, &dd, &yy);
    min_mm = mm;
    min_dd = dd;
    min_yy = yy;
    while (1)
    {
        printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &mm, &dd, &yy);
        if (mm == 0 & dd == 0 & yy == 0)
        {
            break;
        }
       
        if (yy < min_yy || (yy == min_yy & mm < min_mm) || (yy == min_yy & mm == min_mm & dd < min_dd))
        {
            min_mm = mm;
            min_dd = dd;
            min_yy = yy;
        }
    }
    printf("%d/%d/%02d is the earliest date", min_mm, min_dd, min_yy);

    return 0;
}