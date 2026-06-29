#include <stdio.h>
 int main(){
     int i,a,b,sum;
     for(i=10;i<100;i++){
         a=i%10;
         b=i/10;
         if(a==5){
             sum=a+b;
             printf("Number is:%d\n",i);
             printf("sum:%d\n",sum);
         }
     }
     return 0;
 }
