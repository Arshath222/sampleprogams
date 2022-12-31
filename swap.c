#include<stdio.h>
int main()
{
   int a,b,temp;
    printf("Enter the a number:\n");
    scanf("%d",&a);
     printf("Enter the b number:\n");
    scanf("%d",&b);

    temp = a;
     a = b;
     b = temp;
     printf("The swap of a is: %d\n",a);
      printf("The swap of a is: %d",b);
      return 0;

}