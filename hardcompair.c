#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    int firstnum = pow(a,b);
    int secondnum = pow(c,d);
    if(firstnum>secondnum){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
