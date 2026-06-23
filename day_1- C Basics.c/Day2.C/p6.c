#include<stdio.h>
int main(){
    int num,x,y;
    printf("enter 3 digit no:");
    scanf("%d",&num);
    x=num/10; //makes 1's digit 0
    y=x*10+2;
    printf("Result:%d",y);
    return 0;
}