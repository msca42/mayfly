#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter numerical grade: ");
    scanf("%d",&number);
    switch (number / 10)
    {
    case 10: case 9:
        printf("Letter grade: A");
        break;
    case 8:
        printf("Letter grade: B");
        break;
    case 7: 
        printf("Letter grade: C");
        break;
    case 6:
        printf("Letter grade: D");
        break;
    case 5: case 4: case 3: case 2: case 1:
        printf("Letter grade: E");
        break;
    default:
        printf("show error messnage");
        break;
    }
}