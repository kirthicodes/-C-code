#include<stdio.h>
int main(){
    int n,a,b,c,d,count=0;
   
    
    for(n=1;n<100000;n++){
         a=n%10;
    b=(n%100)/10;
    c=(n/100)%10;
    d=n/1000;
    
        if(a+b+c+d==14){
            printf("The digits are:%d\n",n);
            count++;
        }
    }
      printf("The number whose sum is 14:%d",count);
      return 0;
}
