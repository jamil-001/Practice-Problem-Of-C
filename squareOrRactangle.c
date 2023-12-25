#include<stdio.h>
int main(){
    int t,w,h;
    scanf("%d",&t);
    int i;
    for(i=0;i<t;i++){
        scanf("%d%d",&w,&h);
        if(w%h==0){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
return 0;
}
