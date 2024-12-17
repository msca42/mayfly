/* Balance a checkbook */
/*
交互式程序菜单,根据用户选择提供相应操作
*/

#include <stdio.h>

int main(void)
{
    // 声明
    int cmd;
    float balance = 0.0f, credit, debit;

    // 输出提示
    printf("*** ACME checkbook-balancing program  ***\n");
    printf("Commands: 0=clear, 1=credit, 2= debit, ");
    printf("3=balance, 4=exit\n\n");
    
    // 循环选择
    for(;;){
        printf("Enter command: ");
        scanf("%d",&cmd);
        switch (cmd)
        {
        case 0:
            balance = 0.0f;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f",&credit);
            balance += credit;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f",&debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance: $%.2f\n",balance);
            break;
        case 4:
            return 0;
        default:
            printf("Commands: 0=clear, 1=credit, 2=debit, ");
            printf("3=balance, 4=exit\n\n");
            break;
        }
    }
}