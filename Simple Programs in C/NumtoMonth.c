#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the month in number\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("The month entered is January\n");
        break;
    case 2:
        printf("The month entered is February\n");
        break;
    case 3:
        printf("The month entered is March\n");
        break;
    case 4:
        printf("The month entered is April\n");
        break;
    case 5:
        printf("The month entered is May\n");
        break;
    case 6:
        printf("The month entered is June\n");
        break;
    case 7:
        printf("The month entered is July\n");
        break;
    case 8:
        printf("The month entered is August\n");
        break;
    case 9:
        printf("The month entered is September\n");
        break;
    case 10:
        printf("The month entered is October\n");
        break;
    case 11:
        printf("The month entered is November\n");
        break;
    case 12:
        printf("The month entered is December\n");
        break;
    default:
        printf("Invalid value for month entered\n");
        break;
    }
    return 0; 
    }