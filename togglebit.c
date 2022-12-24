#include<stdio.h>
int main()
{
    int n,bp;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Enter the bit to toggle:\n");
    scanf("%d",&bp);
    n=(1<<bp)^n;
    printf("After Toggle the bit number :%d",n);
    
}