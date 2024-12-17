/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    // 声明交易额和佣金
    float commission, value;

    // 输入交易额
    printf("Enter value of trade: ");
    scanf("%f", &value);

    // 添加循环
    while (value != 0)
    {
        // 通过交易额判断佣金
        if (value < 2500.00f)
        {
            commission = 30.00F + .017f * value;
        }
        else if (value < 6250.00f)
        {
            commission = 56.00f + .0066f * value;
        }
        else if (value < 20000.00f)
        {
            commission = 76.00f + .0034f * value;
        }
        else if (value < 5000.00f)
        {
            commission = 100.00f + .0022f * value;
        }
        else if (value < 500000.00f)
        {
            commission = 155.00f + .0011f * value;
        }
        else
        {
            commission = 255.00f + .0009f * value;
        }

        if (commission < 39.00f)
        {
            commission = 39.00f;
        }

        // 输出佣金
        printf("Commission: $%.2f\n", commission);

        // 循环中断条件
        printf("Enter value of trade: ");
        scanf("%f", &value);
    }

    return 0;
}
/*
股票通过经纪人买卖，经纪人根据交易额获取佣金
验证if语句
*/

/*
修改broker.c程序
添加循环，以便用户可以输入多笔交易，程序可以计算每次的佣金，直到输入的交易额为0
*/