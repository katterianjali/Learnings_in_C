#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,sum,diff,mult,div,mod;
    char c;
    printf("Enter the operation to be performed: \n");
    scanf("%c",&c);
    printf("Enter the two numbers for the calculation: \n");
    scanf("%d %d",&a,&b);
 
    switch(c)
    {
    case '+':
        sum = a+b;
        printf("The result is: %d\n",sum);
        break;
    case '-':
        diff = a-b;
        printf("The result is: %d\n",diff);
        break;
    case '*':
        mult = a*b;
        printf("The result is: %d\n",mult);
        break;
    case '/':
        div = a/b;
        printf("The result is: %d\n",div);
        break;
    case '%':
        mod = a%b;
        printf("The resulltion is: %d\n",mod);
        break;
    
    default:
        printf("The result is undefined\n");
        break;
    }
    return 0;
}