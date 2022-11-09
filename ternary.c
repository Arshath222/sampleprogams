#include<stdio.h>
int main(){
    int a = 10 , b = 20;
    int result ;
    result = (a==b)? (a+b):(a-b);
    printf("The output is:%d",result);
}