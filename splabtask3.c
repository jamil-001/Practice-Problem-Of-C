
#include<stdio.h>
int main(){
    int num=50,count=0;
    for(int i=0;i<1;i++){
        num=num%10;
        num=num/10;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
