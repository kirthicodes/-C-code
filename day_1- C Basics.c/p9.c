#include <stdio.h>

int main() {
   int a,F,S;
   printf("Enter a three digit number:");
   scanf("%d",&a);
   F=a/10; //finding tens's digit in three digit number
   S=F%10;
   printf("Ten's digit is:%d",S);
   return 0;
}