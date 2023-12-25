//tow width given user
//then condition
//then print
#include<stdio.h>
int main(){
    int a,b,count=0;
    scanf("%d%d",&a,&b);
    while(a<=b){
            a=a*3;
            b=b*2;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
