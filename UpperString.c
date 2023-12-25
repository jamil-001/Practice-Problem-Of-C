#include<stdio.h>
int main(){
    char n1[50]="JAMIL";
    printf("Before convert lowercase to uppercase: %s\n",n1);
    strlwr(n1);
    printf("After convert lowercase to uppercase: %s\n",n1);
    return 0;
}
