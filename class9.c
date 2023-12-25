#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   int firstpow=pow(a,4);
   int secondpow=pow(b,2);
   int thirdpow=pow(c,2);
   long long result=pow((firstpow +3*a*c),2)+1LL *4 * secondpow * c+thirdpow;
   printf("%lld\n",result);
   return 0;
}
