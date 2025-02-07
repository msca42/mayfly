#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar()!=EOF){
        ++nc;
    }
    printf("%ld\n",nc); // l表示输出的是long类型
    
}
// windows下输入Ctrl+Z表示EOF


