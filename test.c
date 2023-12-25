#include <stdio.h>
#include <string.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";


    strcpy(str2, str1); // Copy str1 to result


    printf("%s\n", str2);

    return 0;
}
