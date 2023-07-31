#include <stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
   scanf("%d",&b);
    if(a==b) printf("EQUAL\n"); 
    else printf("NOT EQUAL\n");
    int x,y,z;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    printf("Enter third number\n");
    scanf("%d",&z);
    if(x==y & x==z) printf("EQUAL\n");
    else printf("NOT EQUAL\n");
    int n;
    printf("Enter three digit number\n");
    scanf("%d",&n);
    int g= n/100;
    n =(n%100);
    int h = n/10;
    int i = n%10;
    if((g<h) && (h<i)) printf("ASCENDING\n");
    else printf("NOT ASCENDING\n");
    int j;
    printf("Enter a number\n");
    scanf("%d",&j);
    if(j<0) printf("-1\n");
    else if(j>0) printf("1\n");
    else printf("0\n");
    return 0;
}