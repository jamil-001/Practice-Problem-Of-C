#include<stdio.h>
int main(){
    int num,rev=0,reminder;
    scanf("%d",&num);
    int temp=num;

    while(temp != 0){
        reminder=temp%10;
        rev = rev * 10 + reminder;
        temp=temp/10;
    }
    printf("Reversed number: %d\n",rev);
    if(num== rev){
        printf("This number is palindrom\n");
    }else{
        printf("This number is not palindrome\n");
    }
}
