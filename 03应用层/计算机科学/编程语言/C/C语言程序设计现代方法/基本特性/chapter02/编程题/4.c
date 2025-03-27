#include <stdio.h>

int main(void)
{
    // 声明
    float money;
    
    // 提示输入
    printf("Enter an amount: ");
    scanf("%f", &money);
    
    // 输出
    printf("With tax added: %.2f ", money * (1 + 0.05));

}

/* 
输入一个美元数量、然后显示增加5%税率的相应金额
思路:  声明、赋值(输入)、运算、输出
*/