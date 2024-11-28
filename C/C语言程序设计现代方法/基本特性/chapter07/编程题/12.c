#include <stdio.h>

int main(void)
{
    // 思路1: 输入num1,ch1,num2,ch2,num3, 通过判断ch1和ch2的运算符进行运算
    // 思路2: 由于不确定表达式的长度，所以要确定依次判断
    char opeator;
    float num1,num2,result;
    printf("Enter an expression: ");
    scanf("%f",&num1);
    while ((opeator = getchar()) != '\n')
    {
        scanf("%f",&num2);
        if(opeator == '+'){
            result = num1 + num2;
            num1 = result;
        } else if(opeator == '-'){
            result = num1 - num2;
            num1 = result;
        } else if(opeator == '*'){
              result = num1 * num2;
            num1 = result;
        } else if(opeator == '/'){
              result = num1 / num2;
            num1 = result;
        }
    }
    

    printf("Value of expression: %.2f",result);
}