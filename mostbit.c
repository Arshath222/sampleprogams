#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if((num>>31)&1)

     {
         printf("The MSB of %d is set \n",num);
     }
     else{
     printf("The MSB of %d is not set \n",num);
     }

}