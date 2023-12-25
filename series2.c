#include<stdio.h>
int main(){
    int n,n2,sum=0,a=1,b=3;
    printf("1.3+2.5+3.7+....+n.n2\n");
    scanf("%d%d",&n,&n2);
    printf("1.2+2.3+3.4+....+%d.%d\n",n,n2);
    while(a<=n && b<=n2){
        sum=sum+a*b;
        a=a+1;
        b=b+2;
    }
    printf("=%d\n",sum);

   return 0;
}
