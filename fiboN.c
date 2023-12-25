#include<stdio.h>
int main(){
    int n,first=0,second=1,fibo,count=0;
    printf("Enter the range\n");
    scanf("%d",&n);
    while(count<n){
        if(count<=1){
            fibo=count;
        }else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }

    return 0;
}
