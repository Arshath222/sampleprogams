#include<stdio.h>
int main()
{
    int a = 20;
    char b = 'W';
     float c = 15.50;
    printf("The actual size of a:%d\n",sizeof(a));
    printf("The actual size of a:%d\n",sizeof(b));
    printf("The actual size of a:%d\n",sizeof(c));
        printf("The memory allocation address size of a:%d\n",&a);
}