#include<stdio.h>
int main(){
    int num,x,y,z,k,n1,n2,result;
    printf("Enter 4 digit no:");
    scanf("%d",&num);//interchange first 2 digits
    x=num/1000;
    k=num%1000;
    y=k/100;
    z=k%100;
    n1=z/10;
    n2=z%10;
    result=(y*1000)+(x*100)+(n1*10)+n2;
    
    printf("Result:%d",result);
    return 0;
}