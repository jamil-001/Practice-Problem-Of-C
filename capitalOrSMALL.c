#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two number\n");
    scanf("%d%d",&num1,&num2);
    int large = (num1>num2) ? num1:num2;
    printf("large number is = %d\n",large);
   return 0;
}
