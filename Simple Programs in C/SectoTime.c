#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter the total time in seconds\n");
    scanf("%d",&x);
    int hours = x/3600;
    int minutes = (x - (hours * 3600))/60;
    int seconds = (x-(hours * 3600))%60;

    if(hours <10)
    printf("0");
    printf("%d:",hours);
    if(minutes < 10)
    printf("0");
    printf("%d:",minutes);
    if(seconds < 10)
    printf("0");
    printf("%d\n",seconds);
    return 0;
}