#include<stdio.h>
int main(){
     // strcat meaning two value concating
    /*char num1[]={"60"};
    char num2[]={"66"};
    strcat(num1,num2);
    printf("%s",num1);*/
    /*
    // strcpy meanig copy one value to another value
    char a[]={"Bangladesh"};
    char b[]={"Dhaka"};
    strcpy(b,a);
    printf("value of a is %s\n",a);
    printf("value of b is %s\n",b);*/
    char a[]="Dhaka";
    char b[]="Dhaka";
    int x=strcmp(a,b);
    if(x==0){
        printf("A and b is equals");
    }else{
        printf("A and b is not equals");
    }

return 0;
}
