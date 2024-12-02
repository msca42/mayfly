#include <stdio.h>

int num_digits(int,int);

int main()
{
   int num =  num_digits(829,4);
   printf("%d", num);
}

int num_digits(int n,int k)
{
  int count = 1;
  while (1)
  {
    if(count == k){
        return n % 10;
    } else {
        n = n / 10;
    }

     count++;
     if(n == 0){
        return 0;
     }
  }
 
  
    
}