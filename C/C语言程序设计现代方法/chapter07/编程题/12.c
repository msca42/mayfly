/*
 * Name: 12.c 
 * Purpose:  对表达式求值
 * Author: mayfly
 * Description: 
 *  Enter an expression: 1 + 2.5 * 3
 *  Value of expression: 10.5 
 */
#include <stdio.h>

int main(void)
{
    double a,b,c;
    char d,e;
    double value,firstValue;
    printf("Enter an expression: ");
    scanf("%lf %c %lf %c %lf",&a,&d,&b,&e,&c);
    switch (d)
    {
    case '+':
        firstValue = a + b;
        break;   
    case '-':
        firstValue = a - b;
        break;
    case '*':
        firstValue = a * b;
        break;
    case '/':
        firstValue = a / b;
        break;
    }

    switch (e)
    {
    case '+':
        value = firstValue + c;
        break;
    case '-':
        value = firstValue - c;
        break;
    case '*':
        value = firstValue * c;
        break;
    case '/':
        value = firstValue / c;
        break;
    }

    printf("Value of expression: %.1f\n",value);
}