#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    printf("Enter the grade: ");
    scanf("%c", &c);
    switch(c)
    {
        case 'A':
        printf("The marks obtained is between 90-100\n");
        break;
        case 'B':
        printf("The marks obtained is between 80-90\n");
        break;
        case 'C':
        printf("The marks obtained is between 70-80\n");
        break;
        case 'D':
        printf("The marks obtained is between 60-70\n");
        break;
        default: printf("The marks obtained is below the minimum\n");
        break;
    }
    return 0;
}