#include<stdio.h>
int main(){
    char s1[]="jamil";
    int len=0;
    int i=0;
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    printf("%d\n",len);
    return 0;
}
