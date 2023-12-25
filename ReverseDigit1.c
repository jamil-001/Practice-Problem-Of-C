#include<stdio.h>
int main(){
    int n,rev=0,rem;
    printf("Enter your number:\n");
    scanf("%d",&n);///45
   int temp=n;
    while(temp !=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("%d\n",rev);


}
