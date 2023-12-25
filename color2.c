#include<stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    char s1[51];
    scanf("%s",s1);
    int count=0;
    for(i=1;i<t;i++){
        if( s1[i] == s1[i-1] ){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
