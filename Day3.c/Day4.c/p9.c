#include<stdio.h>
int main(){
    int n,digits,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("square Digits are:");
    while(n>0){
        digits=n%10;
        if(digits==1||digits==4||digits==9){
            printf("%d",digits);
            count++;
        }
        n=n/10;
    }
    printf("\n Total No of perfect square digits:%d\n",count);
    return 0;
}