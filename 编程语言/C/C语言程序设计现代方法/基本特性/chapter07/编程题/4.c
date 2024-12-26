/* 字母格式电话 数字格式 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter  phone number: ");
    // 将字母转化为数字 记录-转换-拼接-显示
    char ch;
    while ((ch = getchar()) != '\n')
    {
        //大写
        switch (toupper(ch))
        {
        case 'A':
        case 'B':
        case 'C':
            printf("2");
            break;
        case 'D':
        case 'E':
        case 'F':
            printf("3");
            break;
        case 'G':
        case 'H':
        case 'I':
            printf("4");
            break;
        case 'J':
        case 'K':
        case 'L':
            printf("5");
            break;
        case 'M':
        case 'N':
        case 'O':
            printf("6");
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            printf("7");
            break;
        case 'T':
        case 'U':
        case 'V':
            printf("8");
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("9");
            break;
        default:
            putchar(ch);
        }
    }
    

}
