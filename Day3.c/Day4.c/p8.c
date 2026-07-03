#include<stdio.h>
int main(){
    int n,digits,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Odd Digits are:");
    while(n>0){
        digits=n%10;
        if(digits%2!=0){
            printf("%d",digits);
            count++;
        }
        n=n/10;
    }
    printf("\n Total No of odd digits:%d\n",count);
    return 0;
}