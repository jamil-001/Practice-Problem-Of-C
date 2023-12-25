#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=101;i>=1;i=i-2){
       printf("%d\n",i);
       sum+=i;
    }
    printf("%d\n",sum/2);
    return 0;
}
