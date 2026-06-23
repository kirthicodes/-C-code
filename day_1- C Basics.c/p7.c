#include <stdio.h>

int main() {
   int a,ones,last;
   printf("Enter three digit number:");
   scanf("%d",&a);
   ones=a%100; //finding one's digit in three digit number
   last=ones%10;
   printf("Result:%d",last);
}