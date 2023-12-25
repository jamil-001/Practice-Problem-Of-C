#include<stdio.h>
int main(){
    int sum=0,num,rem,i,fact,temp;
    printf("Enter your number\n");
    scanf("%d",&num);
        temp=num;
    while(temp !=0){
          rem=temp%10;
          fact=1;
          for(i=1;i<=fact;i++){
            fact=fact*i;
          }
          sum=sum+fact;
          temp=temp/10;

    }
    if(num==sum){
        printf("%d Strong number\n",num);
    }else{
        printf("%d not strong number\n",num);
    }
    return 0;
}
