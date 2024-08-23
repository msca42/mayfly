/*
 * Name: 8.c 
 * Purpose: UPC校验位的公式替换一致性问题
 * Author: mayfly
 */
/*
 upc: 9 - ((total -1)%10)
 更换: (10 - (total % 10)) % 10
 一致，因为范围都是[0,9]
*/