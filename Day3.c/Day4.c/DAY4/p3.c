#include <stdio.h>
int main(){
    int n,last,first,original;
    int mid,divisor=1;
    printf("Enter a number:");
    scanf("%d",&n);
    original=n;
    //last digit
    last=n%10;
    while(n>=10){
        n=n/10;
        divisor=divisor*10;
        }
    first=n;
    mid=((original%divisor)/10);
    n=(last*divisor+mid*10+first);
    printf("Interchanged:%d\n",n);
    return 0;
}


