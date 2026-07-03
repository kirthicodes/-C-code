#include <stdio.h>
int main(){
   int n,i,count=0,sum=0,temp,digit;
   printf("Enter a number:");
   scanf("%d",&n);
   
   loop:for(i=1;i<=n;i++){
       if(n%i==0)
       count++;
   }
   if(count==2){
       temp=n;
       while(temp!=0){
            digit=temp%10;
            sum=sum+digit;
           temp=temp/10;
       }
       if(sum==14){
          printf("Prime:%d\n",n);  
          printf("sum=%d\n",sum);
       }
   }
   else{
           printf(" not Prime");
   }
   return 0;
}
