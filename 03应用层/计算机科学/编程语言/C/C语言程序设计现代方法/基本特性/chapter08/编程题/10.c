#include <stdio.h>

int main(void)
{
    // 小时、分钟
    int hour, minute;
    // 时间
    int times;
    
    int i;
    // 起飞时间
    int departure[8] = {480,583,679,767,840,945,1140,1305};
    // 到达时间
    int arrive[8] = {616,712,811,900,968,1075,1280,1438};
    // 输入时间
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    // 时间分钟
    times = hour * 60 + minute;
    if(times > departure[0]){
        for(i = 0;i <7;i++){
            if(times > departure[i] && times < departure[i+1]){
                if(times - departure[i] > departure[i+1] - times){
                    i++;
                    break;
                }
            } else {
                break;
            }
        }
    } else {
        if(480 - times < times + 1440 - departure[7]){
            i = 0;
        } else {
            i = 7;
        }
    }

    printf("Closet departure time is %d:%d, ",departure[i]/60,departure[i] % 60);
    printf("arriving at %d:%d",arrive[i]/60,arrive[i] % 60);

    return 0;
}