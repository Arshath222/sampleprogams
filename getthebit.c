#include<stdio.h>
int main()
{
    int num,n,result;
    printf("Enter the number: \n");
    scanf("%d",&num);
    printf("Enter the nth bit position:\n");
    scanf("%d",&n);
    result = (num>>n)&1;
    printf("The value of the %dth bit is %d\n",n,result);
    return 0;
}
