#include<stdio.h>
int main()
{
int num;
printf("Enter the number:\n");
scanf("%d",&num);
if(num & 1)
{
printf("The %d is set \n",num);
}
else{
printf("The %d is not set \n",num);
}
}