#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter seris number\n");
    scanf("%d",&n);
    printf("1 + 3 + 5......+ %d\n",n);
    for(i=1;i<=n;i=i+2){
        sum+=i;
    }
       printf("1 + 3 + 5 +......+%d = %d\n",n,sum);
    return 0;
}
