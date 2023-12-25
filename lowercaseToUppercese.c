#include<stdio.h>
/*int main(){
    char lower;
    printf("Enter lowercase letter then show mazic\n");
    scanf("%c",&lower);
    printf("Uppercase Letter %d\n",lower-32);
    return 0;
}*/
int main(){
    char lower,upper;
    printf("Enter your lowercase letter\n");
    scanf("%c",&lower);
    upper = toupper(lower);
    printf("Uppercase letter is %c\n",upper);
    return 0;
}
