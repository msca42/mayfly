/*
 * Name: 13.c 
 * Purpose:  计算句子的平均词长
 * Author: mayfly
 * Description: 
 *  Enter a sentence: It was deja yu all over again.
 *  Average word length: 3.4
 */
#include <stdio.h>

int main(void)
{
    float sum = 0;
    float count = 0;
    float length = 0;
    double averLength = 0;
    char bit;
    
    printf("Enter a sentence: ");
    while ((bit = getchar())!='\n')
    {   
    //    printf("bit: %c\n",bit);
       if(bit != ' ')
       {
        length++;
       }
    //    printf("length1: %d\n",length);
       if(bit == ' '|| bit == '.')
       {
        count++;
        // printf("length2: %d\n",length);
        sum += length;
        // printf("sum1 = %d\n",sum);
        // 重置length
        length = 0;
       }
    }
    // printf("sum2 = %lf\n",sum);
    // printf("count = %lf\n",count);
    averLength = sum / count;
    printf("Average word length: %.1lf\n",averLength);   
}
/* 
    sum不对是因为没有重置length

*/