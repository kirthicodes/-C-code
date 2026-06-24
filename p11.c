#include <stdio.h>
int main() {
    int num,a,b;
    printf("Enter number:");
    scanf("%d",&num);
    a=num%10;
    b=num/10;
    printf("%d\n",a>=b);
    return 0;
}
