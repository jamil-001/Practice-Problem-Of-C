#include<stdio.h>
int main(){
   float n,i=1.5,sum=0;
   printf("Enter any number =\n");
   scanf("%f",&n);
   while(i<=n){
    printf("%.2f\n",i);
    sum+=i;
    i+=1;
   }
   printf("sum = %.2f\n",sum);
   return 0;
}
