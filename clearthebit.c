#include<stdio.h>
int main()
{
int n,bp;
printf("Eneter the number and Bit position\n");
scanf("%d%d",&n,&bp);
printf("Before the clear the bit operation:%d\n",n);
n = (~(1<<bp))&n;
printf("After clear the bit operation:%d",n);
}
