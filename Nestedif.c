#include <stdio.h>

void main( )
{
    int a, b, c;
    printf("Enter 3 numbers...\n");
    scanf("%d%d%d",&a, &b, &c);
    if(a < b)
    { 
        printf("Insideif");
        if(a > c)
        {
            printf("a is the greatest");
        }
        else 
        {
            printf("c is the greatest");
        }
    }
    else
    {
        printf("Insideelse");
        if(b > c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf("c is the greatest");
        }
    }
} 