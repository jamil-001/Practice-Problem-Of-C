#include<stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    printf("count is = %d\n",count);
    if(count==0){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}
