#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar()!=EOF){
        ++nc;
    }
    printf("%ld\n",nc);
    
}
// windows下输入Ctrl+Z表示EOF


