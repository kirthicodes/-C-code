#include<stdio.h>
int main(){
    int n1,n2,n3,i;
    printf("Enter 1st digit:");
    scanf("%d",&n1);
    printf("Enter second digit:");
    scanf("%d",&n2);
    printf("Enter third digit:");
    scanf("%d",&n3);
    
    for(i=1;i<=n1*n2*n3;i++){
        if(i%n1==0&&i%n2==0&&i%n3==0){
            printf("LCM is:%d\n",i);
            break;
        }
    }
    return 0;
}