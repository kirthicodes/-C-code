#include<stdio.h>
int main(){
    int num,x,y,result;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num/10;
    y=x%10;
    result = num-5*(y&1);
    printf("Result: %d\n",result);
    return 0;
}