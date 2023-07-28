#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    int max = a;
    int min = b;
    if(a<b){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(c<min){
        min=c;
    }
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d\n",min);
    return 0;
}