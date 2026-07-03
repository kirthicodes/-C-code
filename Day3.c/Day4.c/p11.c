#include<stdio.h>
int main(){
    int n;
    for(n=9999;n>=10000/10;n--){
        if(n%7==0&&n%9==0){
            printf("biggest 4 digit number :%d\n",n);
            break;
        }
    }
    return 0;
}