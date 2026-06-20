#include<stdio.h>
int main(){
    int num,x,y,result;
    printf("Enter 2 digit no:");
    scanf("%d",&num);//summing the digits
    x=num%10;
    y=num/10;
    result=x+y;
    printf("Result is:%d",result);
    return 0;
}