/* 编写函数计算最大公约数*/

#include <stdio.h>

void gcd(int,int);

int main()
{ 
    gcd(10,20);
}

void gcd(int m,int n)
{
    int temp;
    while (1)
    {
      if(n == 0)
        return m;
    else{
       temp =  m % n;
       m = n;
       n = temp;
    }  
    }
    
   

}

