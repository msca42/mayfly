#include <stdio.h>

int MaxNum(int[],int);
int Average(int[],int);
int CountZero(int[],int);

int main(void)
{}

int MaxNum(int a[], int n)
{
    int max  = a[0];
    for(int i = 0 ; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    return max;
}



int Average(int a[],int n){
    int sum = 0;
    for(int i = 0; i <n; i++ ){
        sum += a[i];
    }
    return sum / n;
}

int CountZero(int a[],int n)
{
     int count = 0;
    for(int i = 0; i <n; i++ ){
        if(a[i] > 0){
            count++;
        }
    }
    return count; 
}