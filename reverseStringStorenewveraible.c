#include <stdio.h>
#include <string.h>

int main() {
    char s1[50] = "jamil";
    printf("Original string: %s\n", s1);
    int len = strlen(s1);
    printf("Length: %d\n", len);
    char reversed[50];
    for (int i = 0, j = len - 1; i < len; i++, j--) {
        reversed[i] = s1[j];
    }
    reversed[len] = '\0';
    printf("Reversed String is: %s\n", reversed);
    int d= strcmp(s1,reversed);
    if(d==0){
        printf("this string is palindrome\n");
    }else{
       printf("This string is not palindrome\n");
    }
    return 0;
}

