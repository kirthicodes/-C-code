#include <stdio.h>
int main() {
   int a,last;
   printf("enter two digit number:");
   scanf("%d",&a);
   last=a%10;
   printf("Result:%d",last);
}