///1-2+3-4+5-6+.....
///(1+3+5)-(2+4+6)
#include<stdio.h>
int main(){
    int n1,n2,i,j,odd=0,even=0;
    printf("Enter n1 & n2\n ");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n1;i++){
        if(i%2==0)
            even+=i;
        else
            odd+=i;
    }
    printf("odd - even = %d\n",odd-even);
    return 0;
}
