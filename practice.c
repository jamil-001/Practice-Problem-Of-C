#include<stdio.h>
int add(int a,int b){///argument
    int sum= a+b;
    return sum;

}
int main(){
   int n1,n2,sum;
   printf("Enter two number:\n");
   scanf("%d%d",&n1,&n2);
   sum=add(n1,n2);///perameter
   printf("sum = %d\n",sum);

   return 0;
}
