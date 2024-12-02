#include <stdio.h>

int check(int,int,int);

int main(void)
{
    check(10,20,30);
}

int check(int x,int y, int n)
{
    if((x >0 && x < n-1) &&(y > 0 && y< n-1))
        return 1;
    else 
        return 0;
}