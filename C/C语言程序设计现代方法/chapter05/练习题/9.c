/*
 * Name: 9.c 
 * Purpose: 比较两个if语句是否等价
 * Author: mayfly
 */
#include <stdio.h>

int main(void)
{
    int score = 0;
    //a
    if(score >= 90)
        printf('A');
    else if (score >= 80)
        printf('B');
    else if (score >= 70)
        printf('C');
    else if (score >= 60)
        printf('D');
    else 
        printf('F');
    // b
    if (score < 60)
        printf('F');
    else if (score <70)
        printf('D');
    else if (score <80)
        printf('C');
    else if (score <90)
        printf('B');
    else 
        printf('A');

}
/*
等价，一个是从大到小，一个是从小到大
*/

