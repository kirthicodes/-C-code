#include<stdio.h>
int main(){
    int n,digits,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    
    
    while(n>=10){
        
        digits=n%100;
         if(digits==16||digits==25||digits==36||digits==49||digits==64||digits==81){
            count++;
        }
        n=n/10;
    }
    printf("\n Total No of two perfect square digits:%d\n",count);
    return 0;
}
