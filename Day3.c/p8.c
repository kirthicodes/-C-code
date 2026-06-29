#include <stdio.h>

int main() {
    int i,a,b,sum;
    for(i=10;i<100;i++){
        if(i%2==0){
            a=i%10;
            b=i/10;
            sum=a+b;
            if(sum==6){
            printf("%d\n",i);
            }
        }
    }

    return 0;
}


