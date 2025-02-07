#include <stdio.h>

// 原型
int ftoC(int f);

int main()
{
    /* 当fahr = 0,20,...,300时,分别打印华氏温度与摄氏温度对照表 */
    int fahr;

    ftoC(fahr);
}

int ftoC(int fahr)
{
    int celsius;
    int lower, upper, step;
    lower = 0;   /* 温度表下限 */
    upper = 300; /* 温度表上限 */
    step = 20;   /* 步长 */
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}