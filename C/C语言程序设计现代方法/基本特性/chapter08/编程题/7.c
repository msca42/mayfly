#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};

    for(int i = 0; i < 5; i++){
        printf("Enter row %d: ", (i+1));
        for(int j = 0; j < 5; j++){
            scanf("%d",& arr[i][j]);
        }
        printf("\n");
    }

      int row_total1 = 0;
      int row_total2 = 0;
      int row_total3 = 0;
      int row_total4 = 0;
      int row_total5 = 0;
      int column_total1 = 0;
      int column_total2 = 0;
      int column_total3 = 0;
      int column_total4 = 0;
      int column_total5 = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           if(i == 0){
            row_total1 += arr[i][j];
           } else if(i == 1){
            row_total2 += arr[i][j];
           } else if(i == 2){
            row_total3 += arr[i][j];
           } else if(i == 3){
            row_total4 += arr[i][j];
           } else if(i == 4){
            row_total5 += arr[i][j];
           } 
           if(j == 0){
            column_total1 += arr[i][j];
           } else if(j == 1){
            column_total2 += arr[i][j];
           } else if(j == 2){
            column_total3 += arr[i][j];
           } else if(j == 3){
            column_total4 += arr[i][j];
           } else if(j == 4){
            column_total5 += arr[i][j];
           } 
        }
    }

    printf("Row totals: %d %d %d %d %d\n",row_total1,row_total2,row_total3,row_total4,row_total5);
    printf("Column totals: %d %d %d %d %d\n",column_total1,column_total2,column_total3,column_total4,column_total5);
    
}