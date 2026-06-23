#include <stdio.h>
int main() {
   int a,b,c,sum;
   printf("Enter a:");
   scanf("%d",&a);
   printf("Enter b:");
   scanf("%d",&b);
   printf("Enter c:");
   scanf("%d",&c);
   sum=a+b+c; //sum of three numbers got from user
   printf("Result:%d",sum);
   return 0;
}