#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};

    printf("please input five students with five class_sum:");
    for(int i = 0; i < 5; i++){
        printf("Enter NO.%d student grade : ", (i+1));
        for(int j = 0; j < 5; j++){
            scanf("%d",& arr[i][j]);
        }
        printf("\n");
    }

      int sum1 = 0;
      int sum2 = 0;
      int sum3 = 0;
      int sum4 = 0;
      int sum5 = 0;
      int class_sum1 = 0;
      int class_sum2 = 0;
      int class_sum3 = 0;
      int class_sum4 = 0;
      int class_sum5 = 0;
      int class_max1 = 0;
      int class_max2 = 0;
      int class_max3 = 0;
      int class_max4 = 0;
      int class_max5 = 0;
      int class_min1 = 100;
      int class_min2 = 100;
      int class_min3 = 100;
      int class_min4 = 100;
      int class_min5 = 100;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           if(i == 0){
            sum1 += arr[i][j];
           } else if(i == 1){
            sum2 += arr[i][j];
           } else if(i == 2){
            sum3 += arr[i][j];
           } else if(i == 3){
            sum4 += arr[i][j];
           } else if(i == 4){
            sum5 += arr[i][j];
           } 
           if(j == 0){
            class_sum1 += arr[i][j];
            if(class_max1 < arr[i][j]){
                class_max1 = arr[i][j];
            }
            if(class_min1 > arr[i][j]){
                class_min1 = arr[i][j];
            }
           } else if(j == 1){
            class_sum2 += arr[i][j];
             if(class_max2 < arr[i][j]){
                class_max2 = arr[i][j];
            }
            if(class_min2 > arr[i][j]){
                class_min2 = arr[i][j];
            }
           } else if(j == 2){
            class_sum3 += arr[i][j];
             if(class_max3 < arr[i][j]){
                class_max3 = arr[i][j];
            }
            if(class_min3 > arr[i][j]){
                class_min3 = arr[i][j];
            }
           } else if(j == 3){
            class_sum4 += arr[i][j];
             if(class_max4 < arr[i][j]){
                class_max4 = arr[i][j];
            }
            if(class_min4 > arr[i][j]){
                class_min4 = arr[i][j];
            }
           } else if(j == 4){
            class_sum5 += arr[i][j];
             if(class_max5 < arr[i][j]){
                class_max5 = arr[i][j];
            }
            if(class_min5 > arr[i][j]){
                class_min5 = arr[i][j];
            }
           } 
        }
    }

    printf("Student Sum grade: %d %d %d %d %d\n",sum1,sum2,sum3,sum4,sum5);
    printf("Student Average grade: %d %d %d %d %d\n",sum1/5,sum2/5,sum3/5,sum4/5,sum5/5);
    printf("Class Average totals: %d %d %d %d %d\n",class_sum1/5,class_sum2/5,class_sum3/5,class_sum4/5,class_sum5/5);
    printf("Class Max grade: %d %d %d %d %d\n", class_max1,class_max2,class_max3,class_max4,class_max5);
    printf("Class Min grade: %d %d %d %d %d\n", class_min1,class_min2,class_min3,class_min4,class_min5);

}