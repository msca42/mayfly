/*
 * Name: 7.c 
 * Purpose: UPC校验位的公式替换一致性问题
 * Author: mayfly
 */
/*
 upc: 9 - ((total - 1) % 10)
   取值范围0～9
 更换: 10 - (total % 10)
  取值范围1～10
 当total=10 结果不同,上面为0，下面为10
*/