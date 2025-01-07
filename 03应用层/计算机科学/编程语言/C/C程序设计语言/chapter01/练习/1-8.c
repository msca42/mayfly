#include <stdio.h>

int main()
{
    int c, spaceNumber ,tNumber,nNumber;
    spaceNumber = 0;
    tNumber = 0;
    nNumber = 0;
    while ((c=getchar())!= EOF)
    {
        if(c == ' '){
            spaceNumber++;
        } else if(c == '\t'){
            tNumber++;
        } else if(c == '\n'){
            nNumber++;
        }
    }
    printf("spaceNumber: %d\ntNumber: %d\nnNumber:%d\n",spaceNumber,tNumber,nNumber);
    
}