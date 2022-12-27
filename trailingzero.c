#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a number: \n");
    scanf("%d",&a);
    do
    {
        b = a & 1;
        if(b==0)
        c++;
        a>>=1;
    }
    while(b==0);
    printf("The trailing zero's count is:%d",c);

}