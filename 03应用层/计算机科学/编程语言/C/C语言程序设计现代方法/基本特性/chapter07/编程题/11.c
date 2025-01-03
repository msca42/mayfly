#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // 输出lastname 输出firstname
    char ch;
    char temp_name;
    printf("Enter a first and last name: ");
    temp_name =  getchar();
    while ((ch = getchar()) !='\n')
    {
      if(ch == ' '){
        goto lastname;
      }    
    }
    lastname: while ((ch = getchar()) !='\n')
    {
        printf("%c",ch);
    }
    
    printf(", %c",toupper(temp_name));
    
}