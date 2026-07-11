#include <stdio.h>
int main() {
    int num,a,b,c,d;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    a=num%1000;
    b=a%100;
    c=b%10;
    d=b/10;
    printf("%d\n",c==d);
    return 0;
}
