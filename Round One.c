#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    if((a=1 && b=2)|| (a=2 && b=1)){
        result=a+b;
    }else if((a= 2&& b=3)|| (a=3 && b=2)){
        result=a-b;
    }

    printf("%d\n",result);
    return 0;
}
