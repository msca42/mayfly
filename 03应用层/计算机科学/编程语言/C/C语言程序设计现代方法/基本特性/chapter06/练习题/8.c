#include <stdio.h>

int main(void)
{
    int i;
    for(i = 10; i >= 1;  i /=2 ){
        printf("%d ", i++);
    }
}

/* 
i = 10 ,11
i = 5,  6
i = 3, 4
i = 2, 3
i = 1, 2 循环
*/