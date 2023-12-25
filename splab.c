#include<stdio.h>
int main(){
    int arry[4];
   int i;
   for(i=0;i<4;i++){
    scanf("%d",&arry[i]);
   }
    for(i=0;i<4;i++){
        if(arry[i]!=arry[i]){
            printf("%d ",arry[i]);
        }
    }
    return 0;
}
