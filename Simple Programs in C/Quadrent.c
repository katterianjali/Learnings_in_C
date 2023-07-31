#include<stdio.h>
#include<stdlib.h>
int main(){
int x,y;
printf("Enter the co ordinates for x\n");
scanf("%d",&x);
printf("Enter the co ordinates for y\n");
scanf("%d",&y);
if(x>0 && y>0)
printf("The quatrent is First\n");
else if(x>0 && y<0)
printf("The quatrent is Fourth\n");
else if(x<0 && y>0)
printf("The quatrent is Second\n");
else if(x<0 && y<0)
printf("The quatrent is Third\n");
return 0;
}