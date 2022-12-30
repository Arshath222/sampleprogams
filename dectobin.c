#include<stdio.h>
int main()
{
    int n,binary[32],i,j;
    printf("Enter a number:\n");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        binary[i]=n%2;
        n /=2;
        i++;
    }
    for(j=i-1;j>=0;j--)
      printf("The binary convertion of is:%d\n",binary[j]);

   return 0;
}