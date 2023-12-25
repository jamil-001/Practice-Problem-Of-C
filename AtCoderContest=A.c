
#include<stdio.h>
int main(){
    int n,x,i,count=0;
    scanf("%d %d",&n,&x);
    int s1[100];
    for(i=0;i<n;i++){
        scanf("%d",&s1[i]);
        if(s1[i]>= x){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
