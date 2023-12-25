#include<stdio.h>
void sqar(int a){
    int i;
    for(i=1;i<=a;i++){
        printf("%d\n",i);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    sqar(n);
    return 0;
}
