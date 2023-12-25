#include<stdio.h>
int main(){
    char a[]="jamil";
    a[0]=a[4];
    a[4]=a[0];
    printf("%s",a);
return 0;
}
