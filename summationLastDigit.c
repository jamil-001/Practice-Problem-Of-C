#include<stdio.h>
int main()
{
    long long int x,y,lastdigitx,lastdigity,summation;
    scanf("%lld%lld",&x,&y);
    lastdigitx=x%10;
    lastdigity=y%10;
    summation = lastdigitx + lastdigity;
    printf("%lld\n",summation);
    return 0;
}
