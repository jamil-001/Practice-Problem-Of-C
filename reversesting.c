#include<stdio.h>
#include<string.h>
int main(){
    char s1[50]="Hello world";

    printf("Orginal string :%s\n",s1);
    ///find length s1
    int len=strlen(s1);
    printf("%d\n",len);
    char reversed[50];
    ///reverse string
    for(int i=0,j=len-1;i<j;i++,j--){
        reversed[i]=s1[j];
    }
    reversed[len]='\0';
    printf("Reverse String is : %s\n",reversed);

    return 0;
}
