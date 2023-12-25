#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int first=a%100;
    int second= b%100;
    int third = c%100;
    int fourth = d%100;
    int result =(first*second*third*fourth)%100;
    printf("%d\n",result);

    return 0;
}
