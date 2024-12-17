#include <stdio.h>

int main(void)
{
    // 声明
    int i, number;
    
    // 输入
    printf("Enter a number: ");
    scanf("%d",&number);
    
    // 主逻辑
    for(i = 2; i*i <= number; i += 2 ) {
        printf("%d\n", i*i);
    }
    
    return 0;
}
/* 
输入一个数n，显示1~n所有偶数平方值
*/