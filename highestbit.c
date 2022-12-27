
#include<stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
int shift_count = 1;
while((x & 1)==0)
{
 x >>=1;
 shift_count <<=1;
}
printf("The Lowest bit of Entered number is %d",shift_count);
}
