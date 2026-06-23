#include <stdio.h>
int main() {
   int a,hun;
   printf("Enter a three digit no:");
   scanf("%d",&a);
   hun=a/100; //finding hundred's in three digit number
   printf("Result:%d",hun);
   return 0;
}
   