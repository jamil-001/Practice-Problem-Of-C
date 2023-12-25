#include<Stdio.h>
int main(){
    char s[1000000];
    scanf("%s",s);
    int sum=0;
    for(int i=0;s[i] != '\0';i++){
        sum +=s[i]-'0';
    }
    printf("%d",sum);
return 0;
}
