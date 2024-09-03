/*
 * Name: 3.c
 * Purpose:  修改repdigit.c
 * Author: mayfly
 * Description:
 *  使得用户可以输入多个数进行重复数字的判断，当用户输入的数小于或等于0时，程序结束
 */
/* Checks numbers for repeated digits */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    int number;
    printf("How many number do you want to enter? ");
    scanf("%d", &number);
    // 变长数组不能直接使用初始化器初始化
    long array[number];
    int count = 0;
    while (true)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);
        if (n == 0)
        {
            break;
        }
        array[count] = n;
        count++;
    }

    for (int i = 0; i < count; i++)
    {
        while (array[i] > 0)
        {
            digit = array[i] % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            array[i] /= 10;
        }

        if (array[i] > 0)
        {
            printf("%ld:Repeated digit\n", array[i]);
        }
        else
        {
            printf("%ld:No repeated digit\n", array[i]);
        }
    }
}