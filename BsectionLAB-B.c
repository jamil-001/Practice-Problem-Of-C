#include <stdio.h>
#include <ctype.h>

int main() {
    char s1[100];
    scanf("%s", s1);

    for (int i = 0; s1[i]; i++) {
        s1[i] = tolower((unsigned char)s1[i]);
    }
    printf("%s\n", s1);
    return 0;
}
