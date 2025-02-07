/* 
 统计空格、制表符与换行符个数
*/
#include <stdio.h>

int main(void)
{
    int c, ns,nt,nn;

    ns = 0;
    nt = 0;
    nn = 0;

    while ((c = getchar())!= EOF)
    {
        // 空格
        if (c == ' '){
            ++ns;
        }
        // 制表符
        if (c == '\t'){
            ++nt; 
        }
        // 换行符
        if (c == '\n'){
            ++nn;
        }
    }
    
    printf("%d  %d %d",ns,nt,nn);
}