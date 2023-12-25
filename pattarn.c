#include<stdio.h>
int main(){
   int name[10],sum=0;
   for(int i=0;i<10;i++){
    scanf("%d",&name[i]);
   }
   for(int j=0;j<10;j++){
    printf("%d, ",name[j]);
    sum=name[j]+sum;
   }
   printf("sum is = %d\n",sum);
   return 0;
}
