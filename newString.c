#include<stdio.h>
int main(){
    char a[1000];
    char b[1000];
    scanf("%s%s",a,b);
    int len1= strlen(a),len2 = strlen(b);
    printf("%d %d\n%s %s",len1,len2,a,b);
    return 0;
}
