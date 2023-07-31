#include <stdio.h>
#include<stdlib.h>
int main(){
    int i;
    printf("Enter the year\n");
    scanf("%d",&i);
    if(i%400 == 0) 
    //printf("This is a Leap Year\n");
    //else if(i%100 == 0)
    printf("This is a not a Leap Year\n");
    else if(i%4 ==0)
    printf("This is a Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}