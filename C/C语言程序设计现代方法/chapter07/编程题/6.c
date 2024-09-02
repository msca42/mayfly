/*
 * Name: 6.c 
 * Purpose:  显示数据的值
 * Author: mayfly
 * Description:
 *  显示sizeof(int)、sizeof(short)、sizeof(long)、sizeof(float)、sizeof(double)和sizeof(long double)
 */
/*
sizeof()是什么类型，size_t 本质是unsigned int
*/
#include <stdio.h>

int main(void)
{
    printf("sizeof(int): %zu\n",sizeof(int));
    printf("sizeof(short): %zu\n",sizeof(short int));
    printf("sizeof(long): %zu\n",sizeof(long int));
    printf("sizeof(float): %zu\n",sizeof(float));
    printf("sizeof(dou): %zu\n",sizeof(double));

}


