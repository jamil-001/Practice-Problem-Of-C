#include<stdio.h>
int main(){
    int a,b,value;
    char sign;
    scanf("%d %c %d",&a,&b,&sign);
    if(sign='+'){
        sign='+';
        value = a + b;
        printf("%d\n",value);
    }
    return 0;
}
