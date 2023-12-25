#include<stdio.h>
int main(){
    char str1[100],str2[100];
    scanf("%s%s",str1,str2);
    int len=strlen(str1);
    int len2=strlen(str2);

    printf("%d %d\n",len,len2);
    char result[100];
    strcpy(result,str1);
    strcat(result,str2);
    printf("%s\n",result);

    char temp = str1[0];
         str1[0]=str2[0];
         str2[0]=temp;

    printf("%s %s\n",str1,str2);
    return 0;
}
