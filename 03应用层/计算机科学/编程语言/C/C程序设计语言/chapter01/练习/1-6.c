#include <stdio.h>

int main()
{   
    int result = getchar()!=EOF;
    printf("%d",result);
}
/*
 输出0的情况，也就是getchar() = EOF 
    windows 中按下crtl+z 触发文件结束符
    linux和macOS 中按下ctrl+d 触发文件结束符

*/