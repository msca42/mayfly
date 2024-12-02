#include <stdio.h>
#include <ctype.h>

float compute_GPA(char [], int );

int main(void)
{}

float compute_GPA(char grades[], int n)
{
    int grade = 0;
    for(int i = 0 ; i < n ; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A':
            grade += 4;
            break;
        case 'B':
            grade += 3;
            break;
        case 'C':
            grade += 2;
            break;
        case 'D':
            grade += 1;
            break;
        case 'F':
            grade += 0;
            break;
        }

        return grade / n;
    }
}