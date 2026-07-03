#include <stdio.h>
int main(){
    int n,reverse=0,digits;
    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n!=0){
        digits=n%10;//last digit
        reverse=(reverse*10)+digits;
        n=n/10;//remove last digit
    }
    printf("Reverse:%d\n",reverse);
    return 0;
}
