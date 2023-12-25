#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

   /* if(a<=b && a<=c){
        s1=a;
        s2=b;
        s3=c;
    }else if(b<=a && b<=c){
        s1=b;
        s2=a;
        s3=c;
    }else{
        s1=c;
        s2=a;
        s3=b;
    }
    if(s2>= s3){
        int temp=s2;
        s2=s3;
        s3=temp;
    }
    printf("%d %d %d\n",s1,s2,s3);*/
    if(a<=b && b<=c){
       printf("Yes\n");
       }else{
        printf("No\n");
       }
    return 0;
}
