#include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="jamil";
    char s2[30]="jabel";
    char temp[30];
    printf("Before swaping string:\n");
    printf("s1 is: %s\ns2 is: %s\n",s1,s2);
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
    printf("After swaping string:\n");
    printf("s1 is: %s\ns2 is: %s\n",s1,s2);

   return 0;
}
