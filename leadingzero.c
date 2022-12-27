#include<stdio.h>
int main()
{
int a,b,c,d=0;
printf("Enter a number: \n");
scanf("%d",&a);
b=sizeof(a)*8;
for(b=b-1;b>=0;b--)
{
 c=(1<<b)&a;
 if(c==0)
 {
 d++;
 }
 else{
 break;
 }
 }
 printf("The leading zero's of %d is:%d",a,d);

}