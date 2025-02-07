// 统计数字、空白符、其他字符出现的次数
#include <stdio.h>

int main()
{
    // 声明
    int c, i, nwhite, nother;
    int ndigit[10];

    // 初始化
    nwhite = nother  = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    
    // 获取输入字符
    while ((c = getchar()) != EOF)
    {
        // 统计数字
        if (c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        // 统计空白符
        } else if ( c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        // 统计其他字符
        } else {
            ++nother;
        }
    }


    // 打印
    printf("digits = ");
    for (i = 0; i < 10; ++i)
        printf("  %d", ndigit[i]);
    printf(",  white space =  %d, other = %d\n", nwhite,nother);
}