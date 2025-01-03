/*
Check numbers for repeated digits
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10];
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        // 重置
        for(int i = 0; i < 10; i++) 
            digit_seen[i] = false;
        while (n > 0)
        {
            digit = n % 10;
            if (digit_seen[digit])
            {
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if (n > 0)
        {
            printf("Repeated digit\n");
        }
        else
        {
            printf("No repeated digit\n");
        }

        printf("Enter a number: ");
        scanf("%ld", &n);
        printf("n2: %d",n);
        }

    return 0;
}