#include <stdio.h>
#include <stdlib.h>

#define MAXOP 100
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);

/* 逆波兰计算器 */
int main()
{
  int type;
  double op2;
  char s[MAXOP];

  while ((type = getop(s))!=EOF){
    switch (type){
    case NUMBER:
      push(atof(s));
      break;
    case '+':
      push(pop() + pop());
      break;
    case '*':
      push(pop() * pop());
      break;
      break;
    case '-':
      op2 = pop();
      push(pop() - op2);
      break;
    case '/':
        op2 = pop();
        if(op2 != 0.0)
          push(pop() / op2);
        else 
            printf("error: zero divisor\n");
        break;
    case '\n':
        printf("\t%.8g\n",pop());
        break;
    default:
        printf("error: unknown command %s\n",s);
        break;
    }
  }
  return 0;
  
}

#define MAXVAL 100 /* 栈val的最大深度 */

int sp = 0; /* 下一个空闲位置 */
double val[MAXVAL];

/* push函数: 把f压入值栈中 */
void push(double f)
{
  if(sp < MAXVAL)
    val[sp++]= f;
  else 
    printf("error: stack full,can't push %g\n", f);
}

/* pop函数: 弹出并返回栈顶的值 */
double pop(void)
{
  if(sp > 0)
    return val[--sp];
  else {
    printf("error: stack empty\n");
    return 0.0;
  }
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop函数 获取下一个运算符或数值操作数*/
int gettop(char s[])
{ 
  int i,c;
  
  while ((s[0] = c = getch()) == ' '|| c == '\t')
    ;
  s[1] = '\0';
  if(!isdigit(c) && c != '.')
    return c; /* 不是数 */
  i = 0;
  if (isdigit(c)) /* 收集整数部分*/
    while (isdigit(s[++i] = c = getch()))
      ;
  if (c == '.')
    while (isdigit(s[++i] = c = getch()))
  s[i] = '\0';
  if(c != EOF)
    ungetch(c);
  return NUMBER;
}

#define BUFSIZE 100

char buf[BUFSIZE]; /* 用于ungetch函数的缓冲区*/
int bufp = 0; /* buf中下一个空闲位置 */

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
