
#include<stdio.h>
int main(){
    char a[10],b[10];
    scanf("%s%s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    strcat(a,b);

    printf("%d %d\n",len1,len2);
    printf("%s\n",a);
    char a[0]=a[4];
    printf("%s\n",a);




return 0;
}
