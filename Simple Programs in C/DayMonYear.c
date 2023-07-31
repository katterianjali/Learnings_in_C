#include <stdio.h>
#include<stdlib.h>
int main(){
    int d,m,y, leap=0;
    printf("Enter the day\n");
    scanf("%d",&d);
    printf("Enter the Month\n");
    scanf("%d",&m);
    printf("Enter the Year\n");
    scanf("%d",&y);
    if(m==2)
    {
        if((y%4==0) && ((y%100 != 0) || (y%400 == 0)))
        leap +=1;

    }
    d= d+1;
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                if(d<=31)
                break;
        case 4:
        case 6:
        case 9:
        case 11:
                if(d<=30)
                break;
        case 2:
                if((d<=29) && (leap==1))
                break;
                else if(d<=28)
                break;
        default:
                d = 1;
                m = m+1;
                if(m>12)
                {
                    m =1;
                    y = y+1;
                }
                break;
    
    }
    printf("The new date is %d / %d / %d\n",d,m,y);
    return 0;
}