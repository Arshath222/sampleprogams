#include<stdio.h>
int main()
{
int x,y;
printf("Enter a number: \n");
scanf("%d",&x);
y=~x;
printf("The Original number is:%d",x);
printf("The flipped number is:%d",y);
}