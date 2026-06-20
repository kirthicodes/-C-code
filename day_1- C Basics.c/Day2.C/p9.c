#include<stdio.h>
int main(){
    int num,x,y,z,result;
    printf("Enter 2 digit number:");
    scanf("%d",&num);
    x=num%10;
    y=x/10;
    z=x+y;
    result = num-5*(z&1);
    printf("Result: %d\n",result);
    return 0;
}