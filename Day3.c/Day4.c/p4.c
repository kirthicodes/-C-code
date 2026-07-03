#include <stdio.h>
int main(){
    int n, last,sub,odd,same,final;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d\n",n);
    }
    else{
        last=n%10;
        sub=last-1;
        final=(n/10)*10+(sub);
        printf("odd:%d\n",final);
       
    }
    return 0;
}
