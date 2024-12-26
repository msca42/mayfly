/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    //声明
    float commission, price,value, ccommission;
    int amount;
    
     // 输入用户输入股票的数量和每股的价格
    printf("Enter amount and the price of stock: ");
    scanf("%d %f", &amount, &price);

    // 计算逻辑
    value = price * amount;

    // 核心逻辑 通过交易额判断佣金
    if(value < 2500.00f){
        commission = 30.00F + .017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f){
        commission = 100.00f + .0022f * value;
    } else if(value < 500000.00f){
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f  * value;
    }

    if (commission < 39.00f){
        commission = 39.00f;
    }
    // 输出佣金
    printf("Commission: $%.2f\n", commission);
    

    // 计算对手佣金
    if(amount < 2000){
       ccommission = 33 + 0.03 * amount;
    } else {
        ccommission = 33 + 0.02 * amount;
    }

   printf("Commission of Others: $%.2f\n",ccommission);

    return 0;
    
}

/*
修改broker.c 
1
*/