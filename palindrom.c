#include<stdio.h>
int main(){
   int num,rev=0,rem;
   scanf("%d",&num);
   int temp=num;
   while(temp !=0){
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
   }
   printf("num is %d\n",num);
   printf("sum is %d\n",rev);
   if(num==rev){
    printf("palindrom\n");
   }else{
    printf("Not palindrom\n");
   }
   return 0;
}
