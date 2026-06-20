#include<stdio.h>
int main(){
    int num,x,y,n1,n2,result;
    printf("Enter 3 digit number:");
    scanf("%d",&num);//makes 10's digit as zero
    x=num%100;
    y=x/10;
    n1=num/100;
    n2=x%10;
    result=(n1*100)+(y*0)+n2;
    printf("Result: %d\n",result);
    return 0;
}