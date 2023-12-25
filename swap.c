#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter Number1\n");
    scanf("%d",&num1);
    printf("Enter number2\n");
    scanf("%d",&num2);
    //now
    temp = num1;
    num1= num2;
    num2= temp;
    printf("Now\nNumber1 =%d\nNumber2 =%d\n",num1,num2);
   return 0;
}
