#include <stdio.h>
#define BUFSIZE 100

static char buf[BUFSIZE]; /* 用于ungetch函数的缓冲区*/
static int bufp = 0; /* buf中下一个空闲位置 */

int getch(void) /* 取一个字符(可能是压回的字符) */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /* 把字符压回输入中*/
{
  if(bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else 
    buf[bufp++] = c;
}
