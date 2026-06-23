#include <stdio.h>
int main()
{
    int num,rev;
    printf("Enter a two digit number:");
    scanf("%d",&num);
    rev=(num%10)*10+(num/10); //reverse of the number
    printf("Result:%d",rev);
    return 0;
}