#include<stdio.h>
int main()
{
    int num,rev,x,y,z,k;
    printf("Enter a 3 digit no:");
    scanf("%d",&num);
 //Reverse a three digit number    
    x=num%100;
    y=x%10;
    z=x/10;
    k=num/100;

    rev = (y*100)+(z*10)+k;
    printf("Result:%d",rev);
    return 0;
}