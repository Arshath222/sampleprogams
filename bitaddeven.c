#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number:");
    scanf("%d",&num);
    n = num & 1;
    if(n==0)
    printf("Even number");
    else
    printf("odd number");

}