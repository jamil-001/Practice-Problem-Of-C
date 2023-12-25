#include<stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("notw a= %d b= %d\n",a,b);
}
int main(){
    int c,d;
    printf("Enter two number:\n");
    scanf("%d%d",&c,&d);
    swap(c,d);

    return 0;
}
