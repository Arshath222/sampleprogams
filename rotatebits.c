#include<stdio.h>
int main()
{
    int x ,y, rotate_rightshift=0,rotate_leftshift=0;
    printf("Enter the number: \n");
    scanf("%d",&x);
    printf("Enter the number to rotate: \n");
    scanf("%d",&y);
   
    rotate_leftshift = x<<y;
    printf("The result is :%d\n",rotate_leftshift);
    rotate_rightshift = x>>y;
    printf("The result is :%d",rotate_rightshift);
}