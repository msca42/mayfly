#include <stdio.h>

int main(void)
{
    // 声明
    float number ,max = 0;
    
    // 初始化输入
    printf("Enter a number: ");
    scanf("%f",&number);
    max = number;
    
    // 循环
    while (number > 0)
    {
        printf("Enter a number: ");
        scanf("%f",&number);
        if(number > max) {
            max = number;
        }
    }

    // 输出
    printf("The largest number enetered was %g",max);

    return 0;
    

    // // 声明
    // float max = 0, num;

    // // 循环
    // while (1)
    // {
    //     printf("Enter a number: ");
    //     scanf("%f", &num);
    //     if(max < num){
    //         max = num;
    //     }
    //     if(num <= 0){
    //         break;
    //     }
    // }

    // // 输出
    // printf("The largest number entered was %.2f",max);
}

/*
 找出用户输入的一串数字中的最大数，提示用户一个一个输入
 当用户输入0或负数时显示结果

 前后比较显示最大数
*/