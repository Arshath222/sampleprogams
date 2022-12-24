#include <stdio.h>
int main()
{
int n,bp;
printf("Enter the number and bit position\n");
scanf("%d%d",&n,&bp);
printf("Before operation n = %d\n", n);
n = n|(1<<bp);
printf("Before operation n = %d\n", n);
}
