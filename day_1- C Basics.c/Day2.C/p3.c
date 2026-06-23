#include<stdio.h>
int main()
{
    int num,rev,x,y,z,k,N1,N2;
    printf("Enter a 4 digit no:");
    scanf("%d",&num);
 //Reverse a four digit number    
    x=num%1000;
    y=x%100;
    z=y%10;
    k=y/10;
    N1=num/1000;
    N2=(num/100)%10;

    rev = (N1*1000)+(N2*100)+(z*10)+k;
    printf("Result:%d",rev);
    return 0;
}