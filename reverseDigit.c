#include<stdio.h>
int main(){
    int x,reverse=0,remainder;
    printf("Enter your number\n");
    scanf("%d",&x);
    45
    while(x !=0){
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }
     printf("reverse int: %d\n",reverse);
    return 0;
}
