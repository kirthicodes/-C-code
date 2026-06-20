#include<stdio.h>
int main(){
    int num,x,y;
    printf("enter 2 digit no:");
    scanf("%d",&num);
    x=num/10; //makes 1's digit 0
    y=x*10;
    printf("Result:%d",y);
    return 0;
}