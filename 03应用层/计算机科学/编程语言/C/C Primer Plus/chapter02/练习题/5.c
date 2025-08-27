#include <stdio.h>
void br(void);
void ic(void);

int main(void)
{
    br();
    ic();
    printf("Brazil, Russia");
}

void br(void)
{
    printf("Brazil, Russia, India, China\n");
}


void ic(void)
{
    printf("India, China,\n");
}
