#include<stdio.h>
int main(){
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i;
    }
    printf("%d\n",sum);
   return 0;
}
